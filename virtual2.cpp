#include<iostream>
using namespace std;
class base 
{
public:
int sml =2;
char ch=sml;
    virtual void  print()
    {
        cout<<"Base Check"<<ch<<" ";
    }
};
class derived: public base
{
public:
int sml =3;
char ch=sml;
    void  print()
    {
        cout<<"derived Check"<<ch<<" "<<endl;
    }
};

int main()
{
    base *b1;
    derived d1;
    b1=&d1;
    b1->print();
    b1->print();
    return 0;
}