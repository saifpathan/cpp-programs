#include<iostream>
using namespace std;
class bankaccount
{
	int acc_no;
	char name[20];
	double bal;
	static double interestrate;
public:
	bankaccount()//default
	{
		acc_no = 103;
		strcpy(name, "not given");
		bal = 100;
	}
	bankaccount(int a, char* nm, double b)//paramaterized
	{
		acc_no = a;
		strcpy(name, nm);
		bal = b;

	}
	void setname(char* nm)
	{
		strcpy(name, nm);
	}
	static void setInterestRate(double i)
	{
		interestrate = i;
	}
	void display()
	{
		cout << "\nAccount no. is=" << acc_no;
		cout << "\nAccount Holder Name is=" << name;
		cout << "\nBalance in account is=" << bal;
		cout << "\nInterest rate is=" << interestrate;
	}
};//class ends here
double bankaccount::interestrate = 7.8;
void main()
{
	bankaccount b1(101, "Sachin", 2000);
	b1.display();

	bankaccount b2(505, "Saif", 30000);
	b2.display();

	bankaccount b3(007, "Vinayak", 1);
	b3.display();

	bankaccount::setInterestRate(10.2);
	b1.display();
	b3.display();
}