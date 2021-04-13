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
struct Hr :public Employee
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
	void display()
	{
		Employee::display();
		cout << "\nCommission is=" << this->commission;
	}
};
void main()
{
	Hr h1;
	h1.display();
	cout << "\n\n";

	Hr h2(140, "Saif", 70000, 700);
	h2.display();
	cout << "\n\n";
}