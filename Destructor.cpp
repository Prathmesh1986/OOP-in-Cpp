#include <iostream>
using namespace std;

int count = 0;
class num
{
public:
    
    num()
    {
        ::count++;
        cout << "Constructor called for object " << ::count << endl;
    }
    ~num()
    {
        cout << "Destructor called for object " <<:: count << endl;
        ::count--;
    }
};

int main()
{
    cout << "Inside main function " << endl;
    num n1;
    cout << "First object created" << endl;
    {
        cout << "Entering this block" << endl;
        num n2;
        cout << "Second object created" << endl;
        num n3;
        cout << "third object created" << endl;
        cout << "Exiting this block" << endl;
    }
    cout << "Exiting Main Function." << endl;

    return 0;
} 
