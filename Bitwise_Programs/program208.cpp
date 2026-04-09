//Accept no from user and last second bit is on or off

#include<iostream>
using namespace std;

class Checkbit
{
    public:
        int iNo;

    Checkbit(int A)
    {
        iNo = A;
    }

    DisplayBit()
    {
        int iResult=0;
        int iMask =0x2;

        iResult = iNo & iMask;

        if(iResult == 0)
        {
            cout<<"\nSecond Bit is Off";
        }
        else
        {
            cout<<"\nSecond Bit is On";
        }
    }
};

int main()
{
    int iValue=0;

    cout<<"\nEnter Number:";
    cin>>iValue;

    Checkbit obj(iValue);

    obj.DisplayBit();

    return 0;
}