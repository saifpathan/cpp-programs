#include<stdio.h>
#include<string.h>
struct salesmanager
{
	int id;
	char name[20];
	double salary;
	double incentive;
	int target;

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
	salesmanager s1;
	s1.setId(500);
	s1.setName("Saif");
	s1.setSalary(45000.75);
	s1.setIncentive(5000.60);
	s1.setTarget(30);
	s1.display();

	printf("\n\nSales Manager details=(using get())");
	printf("\nI.D. is=%d", s1.getId());
	printf("\nName is=%s", s1.getName());
	printf("\nSalary is=%lf", s1.getSalary());
	printf("\nIncentive is=%lf", s1.getIncentive());
	printf("\nTarget is=%d", s1.getTarget());
	printf("\n\n");
}