// constant in c++

#include<iostream>
using namespace std;

int main()
{
    int no1 = 10;

    const int no2 = 10;

    no1++;     // allowed
    no2++;     // not allowed

    no1 = 21;  // allowed
    no2 = 21;  // not allowed


    return 0;

}