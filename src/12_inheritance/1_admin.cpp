using namespace std;
#include<iostream>
struct Employee
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
	void display()
	{
		Employee::display();
		cout << "\nAllowance is=" << this->allowances;
	}
};
void main()
{
	Admin a1;
	a1.display();
	cout << "\n\n";

	Admin a2(120, "Saif", 50000, 500);
	a2.display();
	cout << "\n\n";
}