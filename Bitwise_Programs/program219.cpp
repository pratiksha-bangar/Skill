//Accept no from user then 5th bit is on then off 
//and bit is off then on

#include<iostream>
using namespace std;

bool OffBit(int iNo)
{
    int iResult=0;
    int iMask =0x10;

    iResult = iNo ^ iMask;

    cout<<"\nData After Bit Toggle:"<<iResult;
}

int main()
{
    int iValue=0;

    cout<<"\nEnter Number:";
    cin>>iValue;

    OffBit(iValue);

    return 0;
}

