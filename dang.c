#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height){
    width = 0;
    height = 0;
    unsigned int *size;
    if (width && height == 0){
        return NULL
    }
    else if(width && height < 0){
        return NULL
    }
    
}