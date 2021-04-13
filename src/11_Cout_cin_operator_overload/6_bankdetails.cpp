using namespace std;
#include<iostream>
#include<string.h>
class bankdetails
{
	int accountno;
	char name[20];
	double deposit;
	char branch[20];
public:
	bankdetails()
	{
		this->accountno = 0;
		strcpy(this->name, "not given");
		this->deposit = 0;
		strcpy(this->branch, "not given");
	}
	bankdetails(int i, char*nm, double d, char*b)
	{
		this->accountno = i;
		strcpy(this->name, nm);
		this->deposit = d;
		strcpy(this->branch, b);
	}
	void setAccountno(int i)
	{
		this->accountno = i;
	}
	void setName(char* nm)
	{
		strcpy(this->name, nm);
	}
	void setDeposit(double d)
	{
		this->deposit = d;
	}
	void setBranch(char* b)
	{
		strcpy(this->branch, b);
	}
	

	int getAccountno()
	{
		return this->accountno;
	}
	char* getName()
	{
		return this->name;
	}
	double getDeposit()
	{
		return this->deposit;
	}
	char* getBranch()
	{
		return this->branch;
	}


	void display()
	{
		cout << "\nBank details=";
		cout << "\nAccount no. is=" << getAccountno();
		cout << "\nName is=" << getName();
		cout << "\nDeposit is=" << getDeposit();
		cout << "\nBranch is=" << getBranch();
		cout << "\n\n";
	}
};
ostream& operator<<(ostream&, bankdetails&);
istream& operator>>(istream&, bankdetails&);

void main()
{
	bankdetails b1;
	cout << "\n\tEnter details of account holder 1";
	cin >> b1;
	cout << "\n\n";

	bankdetails b2(300, "Saif", 35000.75, "pune");
	cout << "\n\tEnter details of account holder 2";
	cin >> b2;
	cout << "\n\n";

	cout << "\n\tAccount Holder 1 is";
	cout << b1;
	cout << "\n\n";
	cout << "\n\tAccount Holder 2 is";
	cout << b2;
	cout << "\n\n";
}
ostream& operator<<(ostream& out, bankdetails& b1)
{
	out << "\nAccount no. is=" << b1.getAccountno();
	out << "\nName is=" << b1.getName();
	out << "\nDeposit is=" << b1.getDeposit();
	out << "\nBranch is=" << b1.getBranch();
	out << "\n\n";
	return out;
}
istream& operator>>(istream& in, bankdetails& b1)
{
	int accountno;
	char name[20];
	double deposit;
	char branch[20];

	cout << "\n\tAccount no. is=";
	in >> accountno;
	cout << "\tName is=";
	in >> name;
	cout << "\tDeposit=";
	in >> deposit;
	cout << "\tBranch=";
	in >> branch;
	
	b1.setAccountno(accountno);
	b1.setName(name);
	b1.setDeposit(deposit);
	b1.setBranch(branch);
	return in;
}