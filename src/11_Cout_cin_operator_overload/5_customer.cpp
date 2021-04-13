using namespace std;
#include<iostream>
#include<string.h>
class customer
{
	int invoice;
	char name[20];
	double totalbill;
	double discount;
	double netbill;
public:
	customer()
	{
		this->invoice = 0;
		strcpy(this->name, "not given");
		this->totalbill = 0;
		this->discount = 0;
		this->netbill = 0;
	}
	customer(int i, char*nm, double tb, double d,double nb)
	{
		this->invoice = i;
		strcpy(this->name, nm);
		this->totalbill = tb;
		this->discount = d;
		this->netbill = nb;
	}
	void setInvoice(int i)
	{
		this->invoice = i;
	}
	void setName(char* nm)
	{
		strcpy(this->name, nm);
	}
	void setTotalbill(double tb)
	{
		this->totalbill = tb;
	}
	void setDiscount(double d)
	{
		this->discount = d;
	}
	void setNetbill(double nb)
	{
		this->netbill = nb;
	}

	int getInvoice()
	{
		return this->invoice;
	}
	char* getName()
	{
		return this->name;
	}
	double getTotalbill()
	{
		return this->totalbill;
	}
	double getDiscount()
	{
		return this->discount;
	}
	double getNetbill()
	{
		return this->netbill;
	}


	void display()
	{
		cout << "\nCustomer details=";
		cout << "\nInvoice no. is=" << getInvoice();
		cout << "\nName is=" << getName();
		cout << "\nTotal bill is=" << getTotalbill();
		cout << "\nDiscount is=" << getDiscount();
		cout << "\nNet bill is=" << getNetbill();
		cout << "\n\n";
	}
};
ostream& operator<<(ostream&, customer&);
istream& operator>>(istream&, customer&);

void main()
{
	customer c1;
	cout << "\n\tEnter details of customer c1";
	cin >> c1;
	cout << "\n\n";

	customer c2(30, "Saif", 35000.75, 500,34500.75);
	cout << "\n\tEnter details of customer c2";
	cin >> c2;
	cout << "\n\n";

	cout << "\n\tCustomer c1 is";
	cout << c1;
	cout << "\n\n";
	cout << "\n\tCustomer c2 is";
	cout << c2;
	cout << "\n\n";
}
ostream& operator<<(ostream& out, customer& c1)
{
	out << "\nInvoice no. is=" << c1.getInvoice();
	out << "\nName is=" << c1.getName();
	out << "\nTotal bill is=" << c1.getTotalbill();
	out << "\nDiscount is=" << c1.getDiscount();
	out << "\nNet bill is=" << c1.getNetbill();
	out << "\n\n";
	return out;
}
istream& operator>>(istream& in, customer& c1)
{
	int invoice;
	char name[20];
	double totalbill;
	double discount;
	double netbill;
	
	cout << "\n\tInvoice no. is=";
	in >> invoice;
	cout << "\tName is=";
	in >> name;
	cout << "\tTotal Bill is=";
	in >> totalbill;
	cout << "\tDiscount is=";
	in >> discount;
	cout << "\tNet Bill is=";
	in >> netbill;
	c1.setInvoice(invoice);
	c1.setName(name);
	c1.setTotalbill(totalbill);
	c1.setDiscount(discount);
	c1.setNetbill(netbill);
	return in;
}