//Accept no from user and last 14,15,16 bit is on or off

#include<iostream>
using namespace std;

bool Checkbit(int iValue)
{
    int iResult=0;
    int iMask =0xe000;

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
        cout<<"\n14th, 15th and 16th Bit are On";
    }
    else
    {
        cout<<"\n14th, 15th and 16th Bit are Off";
    }

    return 0;
}

