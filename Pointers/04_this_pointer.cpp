#include<iostream>
using namespace std;
class A{
    int a;
    public:
        void setData(int a){
            this->a = a;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main(){
    A a;
    a.setData(4);
    a.getData();
    return 0;
}

// “this” pointer can be used to return a reference to the invoking object. An example program is shown below.

class A{
    int a;
    public:
         A & setData(int a){
            this->a = a;
            return *this;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    A a;
    a.setData(4).getData(); //here setData is returning an object on which we have used the getdata function
    return 0;
}
// In the function “setData” the reference of the object is returned using “this” pointer.
// In the main program by using a single object we have made a chain of the function calls. The main thing to note here is that the function “setData” is 
// returning an object on which we have used the “getData” function. so we don’t need to call the function “getData” explicitly.
