#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str2,str;
    ofstream obj("Sample1.txt");//open the file in write mode
    ifstream in("Sample.txt");//open the file in read mode
    getline(in,str2);//collect data of opened file in str2
    obj<<str2;//paste the collected data in opened file
    cout<<str2;
}