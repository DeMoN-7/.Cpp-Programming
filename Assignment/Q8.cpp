#include <iostream>
#include <iomanip>
using namespace std;
class TelCall
{
private:
    string phno;
    string sname;
    int n;
    int amt = 0;

public:
    TelCall(string phno, string sname, int n)
    {
        this->phno = phno;
        this->sname = sname;
        this->n = n;
    }
    void compute()
    {
        if (0 < n && n <= 100)
        {
            amt = 500;
        }
        else if (100 < n && n <= 200)
        {
            amt = (500 + 1 * (n - 100));
        }
        else if (200 < n && n <= 300)
        {
            amt = (500 + 100 * 1 + (n - 200) * 1.2);
        }
        else
        {
            amt = (500 + 100 * 1 + 100 * 1.2 + (n - 300) * 1.5);
        }
    }
    void display()
    {
        cout << setw(20) << "BILL DETAIL" << endl;
        cout << setw(15) << "SUBSCRIBER's NAME :" << setw(15) << sname << endl;
        cout << setw(15) << "PHONE NUMBER :" << setw(15) << phno << endl;
        cout << setw(15) << "CALLS MADE :" << setw(15) << n << endl;
        cout << setw(15) << "DUE AMMOUNT :" << setw(15) << amt << endl;
    }
};
int main()
{
    TelCall p1("8456892632", "Jiten Kumar Ojha", 500);
    p1.compute();
    p1.display();
    return 0;
}
