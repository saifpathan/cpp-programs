using namespace std;
#include<iostream>
class Employee
{
private:
	int id;
	char name[20];
protected:
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

	virtual void display()
	{
		cout << "\nI.D. is=" << this->id;
		cout << "\nName is=" << this->name;
		cout << "\nSalary is=" << this->sal;
	}
	virtual double calSalary()
	{
		return this->sal;
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

	void display()
	{
		Employee::display();
		cout << "\nIncentive is=" << this->incentive;
		cout << "\nTarget is=" << this->target;
	}
	double calSalary()
	{
		return this->sal + incentive;
	}
};

class Admin :public Employee
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
	double calSalary()
	{
		return this->sal + allowances;
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
	double calSalary()
	{
		return this->sal + commission;
	}
};
void allEmpDetails(Employee*);
void main()
{
	allEmpDetails(new SalesManager(101, "Sachin", 20000, 222, 22));
	cout << "\n\n";
	allEmpDetails(new Admin(102, "Virat", 30000, 333));
	cout << "\n\n";
	allEmpDetails(new Hr(103, "Rohit", 40000, 444));
	cout << "\n\n";
}
void allEmpDetails(Employee* ep)
{
	cout << "\nId of Employee is=" << ep->getId();
	cout << "\nName of Employee is=" << ep->getName();
	cout << "\nTotal Salary of Employee is=" << ep->calSalary();
	
	SalesManager* sp = dynamic_cast<SalesManager*>(ep);
	if (sp != NULL)
		cout << "\nIncentive is=" << sp->getIncentive();
	Admin* ap = dynamic_cast<Admin*>(ep);
	if (ap != NULL)
		cout << "\nAllowance is=" << ap->getAllowances();
	Hr* hp = dynamic_cast<Hr*>(ep);
	if (hp != NULL)
		cout << "\nCommission is=" << hp->getCommission();
}
