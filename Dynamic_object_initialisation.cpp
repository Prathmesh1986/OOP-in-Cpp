#include <iostream>
using namespace std;

class BankDeposit
{
    int principal, years;
    float interest, returnvalue;

public:
    BankDeposit(){ };
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};

BankDeposit :: BankDeposit(int p,int y,float r)
{
    principal = p;
    years = y;
    interest = r;
    returnvalue = principal;
    for(int i=0;i<y;i++)
    {
        returnvalue = returnvalue*(1+interest);
    }
}

BankDeposit :: BankDeposit(int p,int y,int r)
{
    principal = p;
    years = y;
    interest = float(r)/100;
    returnvalue = principal;
    for(int i=0;i<y;i++)
    {
        returnvalue = returnvalue*(1+interest);
    }
}

void BankDeposit :: show()
{
    cout<<"The returnvalue on "<<principal<<" with interest "<<interest<<" will be "<<returnvalue<<endl;
}

int main()
{
    
     BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    
    
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
    
}
