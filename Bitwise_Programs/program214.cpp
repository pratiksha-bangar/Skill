//Accept no from user and last 3rd and 7th bit is on or off

#include<iostream>
using namespace std;

bool Checkbit(int iValue)
{
    int iResult=0;
    int iMask =68;

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
        cout<<"\n3rd and 7th Bit is On";
    }
    else
    {
        cout<<"\n3rd and 7th Bit is Off";
    }

    return 0;
}