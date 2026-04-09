//Accept no and location from user and off the specific bit if it is on 

#include<iostream>
using namespace std;

int OffBit(int iNo,int iPos)
{
    int iResult=0;
    int iMask =0x1;

    iMask = iMask << (iPos-1);   // Dynamic mask
    iMask = ~iMask;

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    int iValue=0,iLocation=0;
    int iRet=0;

    cout<<"\nEnter Number:";
    cin>>iValue;

    cout<<"Enter position:";
    cin>>iLocation;

    iRet = OffBit(iValue,iLocation);

    cout<<"Data After Bit Off:"<<iRet;

    return 0;
}

