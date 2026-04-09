
#include<iostream>
using namespace std;   // predefined

namespace Marvellous   // UserDefined namespace
{
    class Demo
    {
        public :
        
        void Display()
        {
            cout<<"Inside Display Method";
        } 
    };
}

int main()
{
    Marvellous :: Demo obj;

    obj.Display();


    return 0;
}