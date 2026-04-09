#include<stdio.h>

int main()
{
    char ch = 'A';
    int i=10;
    float f = 90.99;
    double d = 98.987;

    char *cp = &ch;
    int *ip = &i;
    float *fp = &f;
    double *dp = &d;
    
    return 0;
}