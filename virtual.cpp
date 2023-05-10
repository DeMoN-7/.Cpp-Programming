#include<iostream>
using namespace std;
class base
{
    public:
    void showw()
    {
        cout<<"base Function show called"<<endl;
    }
    virtual void print()
    {
        cout<<"base print called"<<endl;

    }
};
class derived: public base
{
      public:
    void showw()
    {
        cout<<"der Function show called"<<endl;
    }
    void print()
    {
        cout<<"der print called"<<endl;

    } 
};  
int main()
{
    base *bptr;
    derived obj;
    bptr=&obj;
    bptr->print();
    bptr->showw();
 return 0;
}