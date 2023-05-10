#include <iostream>
using namespace std;

class BankAccount
{
private:
	string Name_of_Depositor;
	string Account_Number;
	string Account_Type;
	int Account_Balance;

public:
	BankAccount(string dname, string Anum, string Atype, int balance = 0)
	{
		this->Name_of_Depositor = dname;
		this->Account_Number = Anum;
		this->Account_Type = Atype;
		this->Account_Balance = balance;
	}
	void Deposit(int add)
	{
		Account_Balance += add;
	}
	void Withdraw()
	{
		int rem = 0;
		cout << "\nenter the ammount to withdraw:\n";
		cin >> rem;
		if (Account_Balance - rem >= 0)
		{
			Account_Balance -= rem;
		}
		else
			cout << "\nYour balance is low\n";
	}
	void Display()
	{
		cout << "\nName: " << Name_of_Depositor << "\t\tBalance: " << Account_Balance << endl;
	}
};

int main()
{
	string type, name, accno;
	int ch;
	cout << "enter Account holder's name: ";
	cin >> name;

	cout << "enter Account number:";
	cin >> accno;

	cout << "enter Account type: ";
	cin >> type;

	BankAccount Acc(name, accno, type);
	do
	{
		cout << "Enter your choice: \n0)Exit\n1)deposit\n2)withdraw\n3)display\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			int add;
			cout << "Enter amount to be added:";
			cin >> add;
			Acc.Deposit(add);
			break;
		case 2:
			Acc.Withdraw();
			break;
		case 3:
			Acc.Display();
			break;
		}

	} while (ch);

	return 0;
}
