
#include<iostream>
using namespace  std;

void DisplayBinary(int iNo1,int iNo2)
{
    int Ans=0;

    Ans= iNo1 & iNo2;
    cout<<"\nBitwise Ans is:"<<Ans;

    Ans= iNo1 | iNo2;
    cout<<"\nBitwise Or is:"<<Ans;

    Ans= iNo1 ^ iNo2;
    cout<<"\nBitwise Xor is:"<<Ans;
}

int main()
{
    int iValue1=0,iValue2=0;

    cout<<"Enter First Number:";
    cin>>iValue1;

    cout<<"Enter Second Number:";
    cin>>iValue2;

    DisplayBinary(iValue1,iValue2);

    return 0;
}