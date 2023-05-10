#include<iostream>
#include<string.h>
using namespace std;
class student
{
public:
    int roll;
    char name[20];
    int math;
    int english;
    int computer;
    
    void get_details()
    {
        cout<<"Enter the Roll";
        cin>>roll;
        fflush(stdin);
        cout<<"Enter the name";
        cin.getline(name,20);
        cout<<"Enter the math marks";
        cin>>math; 
        cout<<"Enter the English marks";
        cin>>english;
        cout<<"Enter the Computer marks";
        cin>>computer;
        
    }
    void put_details()
    {
        cout<<"Roll: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<" Math: "<<math<<endl;
        cout<<"English: "<<english<<endl;
        cout<<" computer: "<<computer<<endl;
        
    }
};
int main()
{
    student s1;
    s1.get_details();
    s1.put_details();
}