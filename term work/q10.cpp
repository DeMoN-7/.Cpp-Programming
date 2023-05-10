#include<iostream>
using namespace std;
class area_rectangle
{
public:
    int area(float l,float b)
    {
        return l*b;
    }
};
class perimeter_rectangle
{
public:
    int peri(float l,float b)
    {
        return 2*(l+b);
    }
};
class rectangle: public area_rectangle,perimeter_rectangle
{
    public:
    void print()
    {

    float length, breadth,a,perimeter;
    cout<<"Enter the length of rectangle: ";
    cin>>length;
    cout<<"Enter the breadth of rectangle: ";
    cin>>breadth;
    a=area(length,breadth);
    perimeter=peri(length,breadth);
    cout<<"Area: "<<a<<endl<<"Perimeter: "<<perimeter<<endl;

    }

};
int main()
{
    rectangle r1;
    r1.print();
 return 0;
}