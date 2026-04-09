#include<iostream>

using namespace std;

class Arithematic
{
    public:
        int no1;
        int no2;

        Arithematic(int value1,int value2)    // parameterized constructor
        {
            no1 = value1;
            no2 = value2;
        }

        int add()
        {
            int result =0;
            result = no1+no2;
            return result;
        }

        int sub()
        {
            int result =0;
            result = no1 - no2;
            return result;
        }
};


int main()
{
    int a=0,b=0,ans=0;

    cout<<"\nEnter first value:";
    cin>>a;

    cout<<"\nEnter second value:";
    cin>>b;

    Arithematic obj(a,b);              // constructor object

    ans = obj.add();
    cout<<"\nAddition is:"<<ans;

    ans = obj.sub();
    cout<<"\nSubstraction is:"<<ans;

    return 0;
}