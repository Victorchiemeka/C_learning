#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>

// Struct to store response data
struct ResponseData {
    char* data;
    size_t size;
};

// Callback function to handle response data
size_t write_callback(char* ptr, size_t size, size_t nmemb, struct ResponseData* response_data) {
    size_t total_size = size * nmemb;

    response_data->data = realloc(response_data->data, response_data->size + total_size + 1);
    if (response_data->data == NULL) {
        printf("Error: Failed to allocate memory.\n");
        return 0;
    }

    memcpy(&(response_data->data[response_data->size]), ptr, total_size);
    response_data->size += total_size;
    response_data->data[response_data->size] = '\0';

    return total_size;
}

// Function to submit ChatGPT request and process the result
void process_chatgpt_request(const char* prompt, const char* api_key) {
    // Set the API endpoint
    const char* endpoint = "https://api.openai.com/v1/engines/davinci-codex/completions";

    // Set the content type and accept headers
    const char* headers[] = {
        "Content-Type: application/json",
        "Authorization: Bearer YOUR_API_KEY",
        NULL
    };

    // Set the request data
    const char* json_data = "{\"prompt\": \"";
    const size_t json_size = strlen(json_data);
    const size_t prompt_size = strlen(prompt);
    const char* json_data_end = "\",\"max_tokens\": 50}";

    size_t request_size = json_size + prompt_size + strlen(json_data_end) + 1;
    char* request_data = (char*)malloc(request_size);
    if (request_data == NULL) {
        printf("Error: Failed to allocate memory.\n");
        return;
    }

    strcpy(request_data, json_data);
    strcat(request_data, prompt);
    strcat(request_data, json_data_end);

    // Create a response data struct
    struct ResponseData response_data;
    response_data.data = malloc(1);
    response_data.size = 0;

    // Initialize libcurl
    CURL* curl = curl_easy_init();
    if (curl) {
        // Set the endpoint URL
        curl_easy_setopt(curl, CURLOPT_URL, endpoint);

        // Set the request headers
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

        // Set the request body
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, request_data);

        // Set the write callback function
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);

        // Set the response data struct
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response_data);

        // Send the request
        CURLcode res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            printf("Error: Failed to perform the request: %s\n", curl_easy_strerror(res));
        } else {
            printf("Response:\n%s\n", response_data.data);
        }

        // Clean up
        curl_easy_cleanup(curl);
    }

    // Clean up allocated memory
    free(response_data.data);
    free(request_data);
}

int main() {
    const char* prompt = "What is the meaning of life?";
    const char* api_key = "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"; // Replace with your actual API key

    process_chatgpt_request(prompt, api_key);

    return 0;
}
