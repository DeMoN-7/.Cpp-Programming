#include<iostream>
using namespace std;
class staff 
{
protected:
    char name[20];
    int code;
    char address[20];
    int hindi_speed;
    int english_speed;

};
class typist:public staff
{
public:
    void get_detail()
    {
        cout<<"Enter Name\n";
        cin>>name;
        cout<<"Enter Code\n";
        cin>>code;
        cout<<"Enter Address\n";
        cin>>address;
        cout<<"Enter English speed\n";
        cin>>english_speed;
        cout<<"Enter Hindi speed\n";
        cin>>hindi_speed;
    }
    void put_details()
    {
        cout<<"name:"<<name<<endl;
        cout<<"Code"<<code<<endl;
        cout<<"address"<<address<<endl;
        cout<<"hindi speed"<<hindi_speed<<endl;
        cout<<"English Speed"<<english_speed<<endl;
    }
};
int main()
{
    typist obj;
    obj.get_detail();
    obj.put_details();
 return 0;
}