#include<stdio.h>
#include<string.h>
class salesmanager
{
	int id;
	char name[20];
	double salary;
	double incentive;
	int target;

public:
	salesmanager()
	{
		this->id = 100;
		strcpy(this->name, "not given");
		this->salary = 15000.75;
		this->incentive = 5500.75;
		this->target = 50;
	}
	salesmanager(int i, char* nm, double s, double in, int t)
	{
		this->id = i;
		strcpy(this->name, nm);
		this->salary = s;
		this->incentive = in;
		this->target = t;
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
	void setIncentive(double in)
	{
		this->incentive = in;
	}
	void setTarget(int t)
	{
		this->target = t;
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
	double getIncentive()
	{
		return this->incentive;
	}
	int getTarget()
	{
		return this->target;
	}

	void display()
	{
		printf("\nSales Manager details=(using display())");
		printf("\nI.D. is=%d", this->id);
		printf("\nName is=%s", this->name);
		printf("\nSalary is=%lf", this->salary);
		printf("\nIncentive is=%lf", this->incentive);
		printf("\nTarget is=%d", this->target);
		printf("\n\n");
	}
};

int main()
{
	salesmanager *ptr;
	ptr = new salesmanager();
	ptr->display();
	delete ptr;

	salesmanager*p1;
	p1 = new salesmanager(500, "Saif", 45000.75, 5000.60, 30);
	p1->display();
	delete p1;
	printf("\n\n");
}