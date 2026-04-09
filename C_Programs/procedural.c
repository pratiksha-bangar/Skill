#include<stdio.h>

int addition(int value1, int value2)
{
    int result =0;
    result = value1 +value2;
    return result;
}

int substraction(int value1, int value2)          // function
{
    int result =0;
    result = value1 - value2;                   // business / function logic
    return result;
}

int multiplication(int value1, int value2)
{
    int result =0;
    result = value1 * value2;
    return result;
}

int division(int value1, int value2)
{
    int result =0;
    result = value1/value2;
    return result;
}

int main()
{
    int a=0,b=0,ans=0; 

    printf("\nEnter value of a:");
    scanf("%d",&a);

    printf("\nEnter value of b:");
    scanf("%d",&b);

    ans = addition(a,b);
    printf("\nAddition is: %d",ans);

    ans = substraction(a,b);
    printf("\nSubstraction is: %d",ans);

    ans = multiplication(a,b);
    printf("\nMultiplication is :%d",ans);

    ans = division(a,b);
    printf("\nDivision is :%d",ans);


    return 0;
}