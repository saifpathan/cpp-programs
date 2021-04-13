using namespace std;
#include<iostream>
#include<string.h>
class salesmanager
{
	int id;
	char name[20];
	double salary;
	double incentive;
	int target;

public:
	salesmanager()
	{
		this->id = 0;
		strcpy(this->name, "not given");
		this->salary = 0;
		this->incentive = 0;
		this->target = 0;
	}
	salesmanager(int i, char* nm, double s, double in, int t)
	{
		this->id = i;
		strcpy(this->name, nm);
		this->salary = s;
		this->incentive = in;
		this->target = t;
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
	void setIncentive(double in)
	{
		this->incentive = in;
	}
	void setTarget(int t)
	{
		this->target = t;
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
	double getIncentive()
	{
		return this->incentive;
	}
	int getTarget()
	{
		return this->target;
	}

	void display()
	{
		cout<<"\nSales Manager details=";
		cout<<"\nI.D. is=" <<getId();
		cout<<"\nName is="<<getName();
		cout<<"\nSalary is="<<getSalary();
		cout<<"\nIncentive is="<<getIncentive();
		cout<<"\nTarget is="<<getTarget();
		cout<<"\n\n";
	}
};
ostream& operator<<(ostream&, salesmanager&);
istream& operator>>(istream&, salesmanager&);
void main()
{
	salesmanager s1;
	cout << "\n\tEnter details of salesmanager s1=";
	cin >> s1;
	cout << "\n\n";
	salesmanager s2(100,"Saif",1500.5,150.5,15);
	cout << "\n\tEnter details of salesmanager s2=";
	cin >> s2;
	cout << "\n\n";
	cout << "\nSalesmanager s1=";
	cout << s1;
	cout << "\n\n";
	cout << "\nSalesmanager s2=";
	cout << s2;
	cout << "\n\n";
}
ostream& operator<<(ostream& out, salesmanager& s1)
{
	out << "\nI.D. is=" <<s1.getId();
	out << "\nName is=" <<s1.getName();
	out << "\nSalary is=" <<s1.getSalary();
	out << "\nIncentive is=" <<s1.getIncentive();
	out << "\nTarget is=" <<s1.getTarget();
	out << "\n\n";
	return out;
}
istream& operator>>(istream& in, salesmanager& s1)
{
	int id;
	char name[20];
	double salary;
	double incentive;
	int target;
	
	cout << "\n\tI.D. is=";
	in >> id;
	cout << "\tName is=";
	in >> name;
	cout << "\tSalary is=";
	in >> salary;
	cout << "\tIncentive is=";
	in >> incentive;
	cout << "\tTarget is=";
	in >> target;
	
	s1.setId(id);
	s1.setName(name);
	s1.setSalary(salary);
	s1.setIncentive(incentive);
	s1.setTarget(target);
	return in;
}