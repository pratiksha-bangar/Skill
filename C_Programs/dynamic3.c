// calloc memeory allocation

#include<stdio.h>    // standard input output
#include<stdlib.h>   // standard library

int main()
{
    int *ptr = NULL;  //initialize  with NULL
   
    // step 1 - allocate the memory
    ptr = (int *)calloc(5 , sizeof(int));

    // step 3 - use the memory

    // step 3 - Deallocate the memory
    free(ptr);

    return 0;
}