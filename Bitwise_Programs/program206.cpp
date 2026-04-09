//Accept no from user and last second bit is on or off

#include<iostream>
using namespace std;

int main()
{
    int iNo=0,iDigit=0;
    int iMask=2;
    int iResult=0;

    cout<<"\nEnter Number:";
    cin>>iNo;

    iResult = iNo & iMask;

    if(iResult == 0)
    {
        cout<<"\nSecond Bit is off";
    }
    else
    {
        cout<<"\nSecond Bit is On";
    }

    return 0;
}