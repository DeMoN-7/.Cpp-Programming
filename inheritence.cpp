#include<iostream>
using namespace std;
class employee 
{
    public:
    int id;
    int salary;
    char name;
    

};
class details:public employee
{
    public:
    void get()
    {
        cout<<"Enter the id"<<endl;
        cin>>id;
    }

};
class salar:public details
{
    public:
    void no()
    {
        cout<<"Enter the salary ";
        cin>>salary;
        cout<<"Enter the Name ";
        cin>>name;
    }
    void print()
    {
        cout<<"Id: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;

    }
};
int main()
{
    salar s;
    s.get();
    s.no();
    s.print();
 return 0;
}