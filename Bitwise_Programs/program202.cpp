
#include<iostream>
using namespace  std;

class Binary
{
    public:
        int iNo;

    Binary(int A)
    {
        iNo = A;
    }

    DisplayBinary()
    {
        int iDigit=0;
        while(iNo != 0)
        {
            iDigit = iNo %2;

            cout<<iDigit;

            iNo = iNo/2;
        }
        cout<<"\n";
    }
};

int main()
{
    int iValue=0,iDigit=0;

    cout<<"Enter a Number:";
    cin>>iValue;

    Binary bobj(iValue);

    bobj.DisplayBinary();

    return 0;
}