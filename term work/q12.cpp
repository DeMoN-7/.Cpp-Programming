#include<iostream>
using namespace std;
class variable 
{
public:
    char name[20];
    int roll;
    int hindi;
    int math;
    int accounts;
    int bst;
    int IT;
    int total;
    int percentage;
};
class get_detail: public variable
{
    public:
    void get()
    {
        fflush(stdin);
        cout<<"Enter the name: ";
        cin.getline(name,20);
        cout<<"Enter the marks in math: ";
        cin>>math;
        cout<<"Enter the marks in Accounts: ";
        cin>>accounts;
        cout<<"Enter the marks in Bussiness Studies: ";
        cin>>bst;
        cout<<"Enter the marks in Hindi: ";
        cin>>hindi;
        cout<<"Enter the marks in I.T: ";
        cin>>IT;
    }
};
class calculate: public get_detail
{
    public:
    void print()
    {
        int total=math+hindi+IT+accounts+bst;
        float per=(total*100)/250;
        cout<<"Name: "<<name<<endl;
        cout<<"Math: "<<math<<endl;
        cout<<"Hindi: "<<hindi<<endl;
        cout<<"I.T: "<<IT<<endl;
        cout<<"Accounts: "<<accounts<<endl;
        cout<<"Business Studies: "<<bst<<endl;
        cout<<"Total: "<<total<<endl;
        cout<<"Percentage: "<<per<<endl;

    }
};
int main()
{
    calculate c1[10];
    for (int i=0;i<10;i++)
    {
        c1[i].get();
    }
    for (int i=0;i<10;i++)
    {
        c1[i].print();
    }

 return 0;
}