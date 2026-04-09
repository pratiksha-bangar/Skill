#include<iostream>
using namespace std;
class Hello
{
    public:
        void fun();      // function declaration
        
};

class Demo
{
    public:
        int i;

    private:
        int j;

    protected:
        int k;

    public:
        Demo()
        {
            i=10;
            j=20;
            k=30;
        }
    friend void Hello :: fun();    // fun function in hello class

};

void Hello :: fun()    // function defination  // fun function in hello class
{
    Demo obj;
        
    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";
    cout<<obj.k<<"\n";
}

int main()
{
    Hello hobj;    // create hello class object
    hobj.fun();
   
    return 0;
}