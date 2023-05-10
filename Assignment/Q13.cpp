#include<iostream>
using namespace std;
class Student
{
    private:
        string name;
        int age;
    public:
        static int count;
        Student()
        {

            cout<<"Enter name : ";
            cin>>name;
            cout<<"Enter age: ";
            cin>>age;
            count++;
        }
        void display()
        {
            cout<<"Name : "<<name<<endl<<"Age : "<<age<<endl;
        }
};
int Student::count=0;

int main()
{
    Student a;
    Student b;
    Student c;
    cout<< "Object Count is : "<<Student::count<<endl;
    return 0;    
}

