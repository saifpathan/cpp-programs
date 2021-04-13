using namespace std;
#include<iostream>
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
		cout<<"\nEmpoyee details=(using display())";
		cout<<"\nI.D. is="<<this->id;
		cout<<"\nName is="<<this->name;
		cout<<"\nSalary is="<<this->salary;
		cout<<"\n\n";
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

	cout<<"\n\n";
}