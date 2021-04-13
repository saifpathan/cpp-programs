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
void main()//basic inheritance using pointer
{
	Employee * ep;
	Employee e1(103, "Virat", 30000);
	ep = &e1;
	ep->display();
	cout << "\n\n";

	SalesManager*sp;
	SalesManager s1(105, "Sachin", 30000, 300, 30);
	sp = &s1;
	sp->display();
	cout << "\n\n";

	Admin* ap;
	Admin a1(120, "Saif", 50000, 500);
	ap = &a1;
	ap->display();
	cout << "\n\n";

	Hr*hp;
	Hr h1(140, "Mukesh", 70000, 700);
	hp = &h1;
	hp->display();
	cout << "\n\n";
}