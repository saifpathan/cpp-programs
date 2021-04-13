#include<stdio.h>
#include<string.h>
class employee
{
	int id;
	char name[20];
	double salary;

public:
	employee()
	{
		this->id = 100;
		strcpy(this->name, "not given");
		this->salary = 20000.75;
	}
	employee(int i, char* nm, double s)
	{
		this->id = i;
		strcpy(this->name, nm);
		this->salary = s;
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

	void display()
	{
		printf("\nEmpoyee details=(using display())");
		printf("\nI.D. is=%d", this->id);
		printf("\nName is=%s", this->name);
		printf("\nSalary is=%lf", this->salary);
		printf("\n\n");
	}
};

void main()
{
	employee *ptr;
	ptr = new employee();
	ptr->display();
	delete ptr;

	employee * p1;
	p1 = new employee(100, "Saif", 25000.75);
	p1->display();
	delete p1;

	printf("\n\n");
}