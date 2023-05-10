#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str2;
    string str="Hello World\nHow are you";
    //ofstream obj("Sample.txt");
    //obj<<str;
    ifstream in("Sample.txt");
   
    getline(in,str2);
    cout<<str2;
      getline(in,str2);
    cout<<str2;
   // }while(str2!=NULL);
 return 0;
}