/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/

#include<iostream>
using namespace std;
class Test
{
    int a;
    int b;

public:
     //Test(int i, int j) : b(j), a(i+b) -->this will throw compile error because of order of declaration of a & b.
     //Test(int i, int j) : a(i), b(a + j) -->this will not.
    Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}
