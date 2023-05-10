#include <iostream>
using namespace std;
class animal
{
public:
    virtual void eat()
    {
        cout << "I am eating generic food" << endl;
    }
};
class cat : public animal
{
public:
    void eat()
    {
        cout << "I am Eating rat" << endl;
    }
};
class dog : public animal
{
public:
    void eat()
    {
        cout << "I am Eating Meat" << endl;
    }
};
void fun(animal *x)
{
    x->eat();
}
int main()
{
    animal *ptr;
    cat obj1;
    dog obj2;
    ptr = &obj1;
    fun(ptr);
    ptr = &obj2;
    fun(ptr);
    return 0;
}