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
		cout << "\nEmployee Default Constructor is called\n\n";
	}
};
struct SalesManager:public Employee
{
	double incentive;
	int target;
public:
	SalesManager()
	{
		cout << "\nSalesManager Default Constructor is called\n\n";
	}
};
void main()
{
	SalesManager s1;
}