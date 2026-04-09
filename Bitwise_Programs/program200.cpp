// Display Decimal into Binary

#include<iostream>
using namespace  std;

int main()
{
    int iNo=0,iDigit=0;

    cout<<"Enter a Number:";
    cin>>iNo;

    while(iNo != 0)
    {
        iDigit = iNo %2;

        cout<<iDigit;

        iNo = iNo/2;
    }

    cout<<"\n";

    return 0;
}