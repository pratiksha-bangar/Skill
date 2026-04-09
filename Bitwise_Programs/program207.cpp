//Accept no from user and last second bit is on or off

#include<iostream>
using namespace std;

bool Checkbit(int iValue)
{
    int iResult=0;
    int iMask =0x2;

    iResult = iValue & iMask;

    if(iResult == 0)       // iResult == iMask then true otherise false
    {
        return false;
    }
    else
    {
        return true;
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
        cout<<"\nSecond Bit is On";
    }
    else
    {
        cout<<"\nSecond Bit is Off";
    }

    return 0;
}