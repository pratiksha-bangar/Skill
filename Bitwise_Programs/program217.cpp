//Accept no from user and last  bit is on or off

#include<iostream>
using namespace std;

int main()
{
    int iValue=0,iPOs=0;
    int iMask=0x1;

    cout<<"\nEnter Number:";
    cin>>iValue;

    cout<<"Enter position:";
    cin>>iPOs;

    iMask = iMask << (iPOs-1);

    if(iMask == 1)
    {
        cout<<"\n Bit is On";
    }
    else
    {
        cout<<"\n Bit is Off";
    }

    return 0;
}

