//Accept no from user and last 17th bit is on or off

#include<iostream>
using namespace std;

bool Checkbit(int iValue)
{
    int iResult=0;
    int iMask =0x10000;

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
        cout<<"\n17th Bit is On";
    }
    else
    {
        cout<<"\n17th Bit is Off";
    }

    return 0;
}

// 0000 0000 0000 0000 0000 0000
//         1   0   0     0   0
// mask - 10000