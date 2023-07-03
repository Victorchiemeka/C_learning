#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * _custom_printf - Custom printf function that prints formatted output to stdout
 * @format: Format string
 *
 * Return: Number of printed characters
 */
int _custom_printf(const char *format, ...)
{
	va_list args;
	int char_count = 0, i = 0, buff_len = 0;
	int flags, width, precision, size, prints;
	char buffer[BUFFER_SIZE];

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			/* If the character is not a format specifier, add it to the buffer */
			buffer[buff_len++] = format[i];

			/* If the buffer is full, print its contents and reset the index */
			if (buff_len == BUFFER_SIZE)
				flush_buffer(buffer, &buff_len);

			char_count++;
		}
		else
		{
			/* If the character is a format specifier, process it */
			flush_buffer(buffer, &buff_len);

			/* Get the flags, width, precision, and size from the format specifier */
			flags = get_flags(format, &i);
			width = get_width(format, &i, args);
			precision = get_precision(format, &i, args);
			size = get_size(format, &i);
			i++;

			/* Handle the format specifier and get the number of characters printed */
			prints = handle_format(format, &i, args, buffer, flags, width, precision, size);

			if (prints == -1)
				return (-1);

			char_count += prints;
		}
	}

	flush_buffer(buffer, &buff_len);
	va_end(args);

	return (char_count);
}

/**
 * flush_buffer - Writes buffer content to stdout and resets the index
 * @buffer: The character buffer
 * @buff_len: Pointer to buffer index
 */
void flush_buffer(char buffer[], int *buff_len)
{
	/* If there are characters in the buffer, print them */
	if (*buff_len > 0)
		write(1, &buffer[0], *buff_len);

	*buff_len = 0;
}

int main()
{
	_custom_printf("emeka");
	return 0;
}
