// class DerivedC: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "DerivedC"
// };
#include <iostream>
using namespace std;

class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class Derived : public base1, public base2,public base3
{
   public:
      void show()
      {
          cout<<"The value of base1 is "<<base1int<<endl;
          cout<<"The value of base2 is "<<base2int<<endl;
          cout<<"The sum of base1 and base2 is "<<(base1int + base2int)<<endl;
          cout<<"The sum of base1,base2 and base3 is "<<(base1int + base2int +base3int)<<endl;
      }
};

int main()
{
    Derived d;
    d.set_base1int(35);
    d.set_base2int(3);
    d.set_base3int(5);
    d.show();

    return 0;
}
