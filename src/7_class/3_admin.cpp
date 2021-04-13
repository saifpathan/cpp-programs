#include<stdio.h>
#include<string.h>
class admin
{
	int id;
	char name[20];
	double salary;
	double allowance;
public:
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
	admin a1;
	a1.setId(30);
	a1.setName("Saif");
	a1.setSalary(35000.75);
	a1.setAllowance(4000.60);
	a1.display();

	printf("\n\nAdmin details=(using get())");
	printf("\nI.D. is=%d", a1.getId());
	printf("\nName is=%s", a1.getName());
	printf("\nSalary is=%lf", a1.getSalary());
	printf("\nAllowance is=%lf", a1.getAllowance());
	printf("\n\n");
}