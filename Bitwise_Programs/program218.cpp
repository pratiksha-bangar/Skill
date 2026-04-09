//Accept no and location from user and check given position bit is on or off

#include<iostream>
using namespace std;

bool Checkbit(int iNo,int iPos)
{
    int iResult=0;
    int iMask =0x1;

    iMask = iMask << (iPos-1);

    iResult = iNo & iMask;

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
    int iValue=0,iLocation=0;
    bool bRet=false;

    cout<<"\nEnter Number:";
    cin>>iValue;

    cout<<"Enter position:";
    cin>>iLocation;

    bRet = Checkbit(iValue,iLocation);

    if(bRet == true)
    {
        cout<<"\nBit is On";
    }
    else
    {
        cout<<"\nBit is Off";
    }

    return 0;
}

