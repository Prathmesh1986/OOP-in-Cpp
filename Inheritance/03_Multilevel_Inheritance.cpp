#include <iostream>
using namespace std;

class student
{
    protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number();
};

void student ::set_roll_number(int r)
{
    roll_number = r;
}

void student ::get_roll_number()
{
    cout << "Roll number is: " << roll_number << endl;
}

class Exam : public student
{
    protected:
        float maths, physics;

public:
    void set_Marks(float, float);
    void get_Marks();
};
void Exam ::set_Marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam ::get_Marks()
{
    cout << "The marks of maths are: " << maths << endl;
    cout << "The marks of physics are: " << physics << endl;
}
class Result : public Exam
{
    float percentage;

public:
    void display_results()
    {
        get_roll_number();
        get_Marks();
        cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    Result harry;
    harry.set_roll_number(420);
    harry.set_Marks(94.0, 90.0);
    harry.display_results();
    return 0;
}
