//Accept no and location from user then bit is on then off 
//and bit is off then on  -- Toggle the Bit

#include<iostream>
using namespace std;

int ToggleBit(int iNo,int iPos)
{
    int iResult=0;
    int iMask =0x1;

    iMask = iMask << (iPos-1);

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    int iValue=0,iLocation=0;
    int iRet=0;

    cout<<"\nEnter Number:";
    cin>>iValue;

    cout<<"\nEnter position:";
    cin>>iLocation;

    iRet = ToggleBit(iValue,iLocation);

    cout<<"\nData After Bit Toggle:"<<iRet;

    return 0;
}

