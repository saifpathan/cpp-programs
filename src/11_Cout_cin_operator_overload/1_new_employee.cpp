using namespace std;
#include<string.h>
#include<iostream>

class Employee
{
	int id;
	char name[20];
	double salary;
public:
	Employee()
	{
		this->id = 0;
		strcpy(this->name, "Not yet set");
		this->salary = 0.00;
	}
	Employee(int id, char* name, double salary)
	{
		this->id = id;
		strcpy(this->name, name);
		this->salary = salary;
	}
	void setId(int id)
	{
		this->id = id;
	}
	void setName(char* name)
	{
		strcpy(this->name, name);
	}
	void setSalary(double salary)
	{
		this->salary = salary;
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
		cout << "\n\t Employee id : " << getId();
		cout << "\n\t Employee name : " << getName();
		cout << "\n\t Employee salary : " << getSalary();
		cout << "\n\n";
	}
};
ostream& operator<<(ostream&, Employee&);
istream& operator>>(istream&, Employee&);
void main()
{
	Employee e1;
	cout << "\n\t Enter details of employee e1";
	cin >> e1;
	cout << "\n\n";

	Employee e2(100, "Not yet set", 100.10);
	cout << "\n\t Enter details of employee e2";
	cin >> e2;
	cout << "\n\n";
	cout << "\n\t Employee e1 is";
	cout << e1;
	cout << "\n\n";
	cout << "\n\t Employee e2 is";
	cout << e2;
	cout << "\n\n";
}
ostream& operator<<(ostream& out, Employee& e1)
{
	out << "\n\t Employee id : " << e1.getId();
	out << "\n\t Employee name : " << e1.getName();
	out << "\n\t Employee salary : " << e1.getSalary();
	out << "\n\n";
	return out;
}
istream& operator>>(istream& in, Employee& e1)
{
	int id;
	char name[20];
	double salary;
	cout << "\n\t Enter ID : ";
	in >> id;
	cout << "\t Enter name : ";
	in >> name;
	cout << "\t Enter salary : ";
	in >> salary;
	e1.setId(id);
	e1.setName(name);
	e1.setSalary(salary);
	return in;
}
