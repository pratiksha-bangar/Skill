//Accept no from user and last fifth bit is on or off

#include<iostream>
using namespace std;

bool Checkbit(int iValue)
{
    int iResult=0;
    int iMask =0x10;

    iResult = iValue & iMask;

    if(iResult == iMask)       
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iNo=0;
    bool bRet=false;

    cout<<"\nEnter Number:";
    cin>>iNo;

    bRet = Checkbit(iNo);

    if(bRet == true)
    {
        cout<<"\n5th Bit is On";
    }
    else
    {
        cout<<"\nSecond Bit is Off";
    }

    return 0;
}