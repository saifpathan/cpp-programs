using namespace std;
#include<iostream>
class Employee
{
	int id;
	char name[20];
	double sal;
public:
	Employee()
	{
		cout << "\nEmployee Default Constructor is called";
		this->id = 100;
		strcpy(this->name, "Not given");
		this->sal = 1000;
	}
	Employee(int i, char*nm, double s)
	{
		cout << "\nEmployee Paramaterised Constructor is called";
		this->id = i;
		strcpy(this->name, nm);
		this->sal = s;
	}
	void display()
	{
		cout << "\nI.D. is=" << this->id;
		cout << "\nName is=" << this->name;
		cout << "\nSalary is=" << this->sal;
	}
};
class SalesManager :public Employee
{
	double incentive;
	int target;
public:
	SalesManager() :Employee()//parameter initialisation list
	{
		cout << "\nSalesManager Default Constructor is called";
		this->incentive = 22;
		this->target = 50;
	}
	SalesManager(int i, char*nm, double s, double in, int t) :Employee(i, nm, s)//parameter initialisation list
	{
		cout << "\nSalesManager Paramaterised Constructor is called";
		this->incentive = in;
		this->target = t;
	}
	void display()
	{
		Employee::display();
		cout << "\nIncentive is=" << this->incentive;
		cout << "\nTarget is=" << this->target;
	}
};
void main()
{
	SalesManager s1;
	s1.display();
	cout << "\n\n";

	SalesManager s2(103, "Virat", 30000, 300, 30);
	s2.display();
	cout << "\n\n";
}