#include <iostream>
using namespace std;
class SampleClass
{
    int a;

public:
    void getdata(int n)
    {
        a = n;
    }
    void display()
    {
        cout << a;
    }
};
int main()
{
    int n;
    cout << "enter the size:";
    cin >> n;
    SampleClass obj[n];
    cout << "Enter the values:";
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        obj[i].getdata(val);
    }
    for (int i = 0; i < n; i++)
    {
        obj[i].display();
    }
    return 0;
}
