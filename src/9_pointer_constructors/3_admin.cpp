#include<stdio.h>
#include<string.h>
class admin
{
	int id;
	char name[20];
	double salary;
	double allowance;
public:
	admin()
	{
		this->id = 100;
		strcpy(this->name, "not given");
		this->salary = 15000.75;
		this->allowance = 1500.65;
	}
	admin(int i, char*nm, double s, double a)
	{
		this->id = i;
		strcpy(this->name, nm);
		this->salary = s;
		this->allowance = a;
	}
	void setId(int i)
	{
		this->id = i;
	}
	void setName(char* nm)
	{
		strcpy(this->name, nm);
	}
	void setSalary(double s)
	{
		this->salary = s;
	}
	void setAllowance(double a)
	{
		this->allowance = a;
	}

	int getId()
	{
		return this->id;
	}
	char* getName()
	{
		return this->name;
	}
	double getSalary()
	{
		return this->salary;
	}
	double getAllowance()
	{
		return this->allowance;
	}


	void display()
	{
		printf("\nAdmin details=(using display())");
		printf("\nI.D. is=%d", this->id);
		printf("\nName is=%s", this->name);
		printf("\nSalary is=%lf", this->salary);
		printf("\nAllowance is=%lf", this->allowance);
		printf("\n\n");
	}
};

int main()
{
	admin*ptr;
	ptr = new admin();
	ptr->display();
	delete ptr;
	
	admin*p1;
	p1 = new admin(30,"Saif",35000.75,4000.60);
	p1->display();
	delete p1;
	printf("\n\n");
} 