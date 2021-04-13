using namespace std;
#include<iostream>
class Employee
{
	int id;
	char name[20];
	double sal;
public:
	void setId(int id)
	{
		this->id = id;
	}
	int getId()
	{
		return this->id;
	}
	void setName(char* nm)
	{
		strcpy(this->name, nm);
	}
	char* getName()
	{
		return this->name;
	}
	void setSalary(double s)
	{
		this->sal = s;
	}
	double getSalary()
	{
		return this->sal;
	}
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
	double getIncentive()
	{
		return this->incentive;
	}
	void setIncentive(double in)
	{
		this->incentive = in;
	}
	void setTarget(int t)
	{
		this->target = t;
	}
	int getTarget()
	{
		return this->target;
	}
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

struct Admin :public Employee
{
	double allowances;
public:
	Admin() :Employee()//parameter initialisation list
	{
		cout << "\nAdmin Default Constructor is called";
		this->allowances = 20;
	}
	Admin(int i, char*nm, double s, double al) :Employee(i, nm, s)//parameter initialisation list
	{
		cout << "\nAdmin Paramaterised Constructor is called";
		this->allowances = al;
	}
	void setAllowances(double al)
	{
		this->allowances = al;
	}
	double getAllowances()
	{
		return this->allowances;
	}
	void display()
	{
		Employee::display();
		cout << "\nAllowance is=" << this->allowances;
	}
};

class Hr :public Employee
{
	double commission;
public:
	Hr() :Employee()//parameter initialisation list
	{
		cout << "\nHr Default Constructor is called";
		this->commission = 30;
	}
	Hr(int i, char*nm, double s, double c) :Employee(i, nm, s)//parameter initialisation list
	{
		cout << "\nHr Paramaterised Constructor is called";
		this->commission = c;
	}
	void setCommission(double c)
	{
		this->commission = c;
	}
	double getCommission()
	{
		return this->commission;
	}
	void display()
	{
		Employee::display();
		cout << "\nCommission is=" << this->commission;
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

	Admin a1;
	a1.display();
	cout << "\n\n";

	Admin a2(120, "Saif", 50000, 500);
	a2.display();
	cout << "\n\n";

	Hr h1;
	h1.display();
	cout << "\n\n";

	Hr h2(140, "Saif", 70000, 700);
	h2.display();
	cout << "\n\n";
}