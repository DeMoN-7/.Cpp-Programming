#include <iostream>
using namespace std;
class base
{
public:
    int x = 30;
    virtual void display()
    {
        cout << "Base: " << x << endl;
    }
};
class derived : public base
{
public:
    int x = 69;
    void display()
    {
        cout << "Derived: " << x << endl;
    }
};
int main()
{
    base *b1,b2;
    derived d1;
    b1=&d1;
    b1->display();
    b1=&b2;
    b1->display();

    return 0;
}