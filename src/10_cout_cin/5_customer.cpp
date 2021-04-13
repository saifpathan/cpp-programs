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
		this->invoice = 100;
		strcpy(this->name, "not given");
		this->totalbill = 1500.75;
		this->discount = 555.75;
		this->netbill = 945;
	}
	customer(int i, char* nm, double tb, double d, double nb)
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
		cout<<"\nCustomer details=(using display())";
		cout<<"\nInvoice no. is="<<this->invoice;
		cout<<"\nName is="<<this->name;
		cout<<"\nTotal Bill is="<<this->totalbill;
		cout<<"\nDiscount is="<<this->discount;
		cout<<"\nNet Bill is="<<this->netbill;
		cout<<"\n\n";
	}
};

int main()
{
	customer*ptr;
	ptr = new customer();
	ptr->display();
	delete ptr;

	customer*p1;
	p1 = new customer(07, "Saif", 20000, 500, 19500);
	p1->display();
	delete p1;
	cout<<"\n\n";
}