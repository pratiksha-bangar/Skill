
#include<stdio.h>
#include<string.h>

int main()
{
    char arr[] = {'H','E','L','L','O','\0'};

    char brr[] = "Hello";

    printf("%d",sizeof(arr));
    printf("%d",sizeof(brr));

    printf("Length of string is :%d", strlen(arr));

    return 0;

}