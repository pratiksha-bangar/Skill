#include<stdio.h>

int main()
{
    int iNo=0;

    printf("Enter any Number:");
    scanf("%d",&iNo);

    printf("\nNumber in Decimal Format:%d",iNo);
    printf("\nNumber in Octal Format:%o",iNo);
    printf("\nNumber in HexaDecimal Format:%x",iNo);

    return 0;
}