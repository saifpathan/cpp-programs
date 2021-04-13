#include<stdio.h>
#include<string.h>
class customer
{
	int invoice;
	char name[20];
	double totalbill;
	double discount;
	double netbill;
public:
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
		printf("\nCustomer details=(using display())");
		printf("\nInvoice no. is=%d", this->invoice);
		printf("\nName is=%s", this->name);
		printf("\nTotal Bill is=%lf", this->totalbill);
		printf("\nDiscount is=%lf", this->discount);
		printf("\nNet Bill is=%lf", this->netbill);
		printf("\n\n");
	}
};

int main()
{
	customer c1;
	c1.setInvoice(07);
	c1.setName("Saif");
	c1.setTotalbill(20000);
	c1.setDiscount(500);
	c1.setNetbill(19500);
	c1.display();

	printf("\n\nCustomer details=(using get())");
	printf("\nInvoice no. is=%d", c1.getInvoice());
	printf("\nName is=%s", c1.getName());
	printf("\nTotal Bill is=%lf", c1.getTotalbill());
	printf("\nDiscount is=%lf", c1.getDiscount());
	printf("\nNet Bill is=%lf", c1.getNetbill());
	printf("\n\n");
}