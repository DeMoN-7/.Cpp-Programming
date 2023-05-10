#include<iostream>
using namespace std;
class shape
{
public:
    virtual void calculate()
    {

    }
};
class square:public shape
{
    public:
    void calculate()
    {
        float area,side;
        cout<<"Enter the side";
        cin>>side;
        area=side*side;
        cout<<"Area of Square is: "<<area<<endl;
    }
    
};
class circle: public shape
{
    public:
    void calculate()
    {
        float area,radius;
        cout<<"enter the radius";
        cin>>radius;
        area=3.14*radius*radius;
        cout<<"Area of circle is: "<< area<<endl;

    }
};

class rectangle: public shape
{
    public:
    void calculate()
    {
        float area,length, breadth;
        cout<<"enter the length";
        cin>>length;
        cout<<"enter the breadth";
        cin>>breadth;
        area=length*breadth;
        cout<<"Area of rectangle is: "<< area<<endl;

    }
};
int main()
{
    shape *s1,*s2,*s3;
    rectangle r1;
    circle c1;
    square sq1;
    s1=&r1;
    s1->calculate();
    s2=&c1;
    s2->calculate();
    s3=&sq1;
    s3->calculate();
    return 0;
}