
#include<stdio.h>
#include<string.h>

int main()
{
    char arr[] = {'H','E','L','L','O','\0'};    // member initialization list

    char brr[] = "Hello";                      // in double quote withou ends \0

    printf("%d",sizeof(arr));
    printf("%d",sizeof(brr));

    printf("Length of string is :%d", strlen(arr));

    return 0;

}