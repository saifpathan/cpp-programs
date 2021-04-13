using namespace std;
#include<iostream>
#include<string.h>
class admin
{
	int id;
	char name[20];
	double salary;
	double allowance;
public:
	admin()
	{
		this->id = 0;
		strcpy(this->name, "not given");
		this->salary = 0;
		this->allowance = 0;
	}
	admin(int i, char*nm, double s, double a)
	{
		this->id = i;
		strcpy(this->name, nm);
		this->salary = s;
		this->allowance = a;
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
	void setAllowance(double a)
	{
		this->allowance = a;
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
	double getAllowance()
	{
		return this->allowance;
	}


	void display()
	{
		cout<<"\nAdmin details=";
		cout<<"\nI.D. is="<<getId();
		cout<<"\nName is="<<getName();
		cout<<"\nSalary is="<<getSalary();
		cout<<"\nAllowance is="<<getAllowance();
		cout<<"\n\n";
	}
};
ostream& operator<<(ostream&, admin&);
istream& operator>>(istream&, admin&);

void main()
{
	admin a1;
	cout << "\n\tEnter details of admin a1";
	cin >> a1;
	cout << "\n\n";

	admin a2(30,"Saif",35000.75,4000.60);
	cout << "\n\tEnter details of admin a2";
	cin >> a2;
	cout << "\n\n";
	
	cout << "\n\tAdmin a1 is";
	cout << a1;
	cout << "\n\n";
	cout << "\n\tAdmin a2 is";
	cout << a2;
	cout << "\n\n";
}
ostream& operator<<(ostream& out, admin& a1)
{
	out << "\nI.D. is=" << a1.getId();
	out << "\nName is=" << a1.getName();
	out << "\nSalary is=" << a1.getSalary();
	out << "\nAllowance is=" << a1.getAllowance();
	out << "\n\n";
	return out;
}
istream& operator>>(istream& in, admin& a1)
{
	int id;
	char name[20];
	double salary;
	double allowance;
	cout << "\n\tI.D. is=";
	in >> id;
	cout << "\tName is=";
	in >> name;
	cout << "\tSalary is=";
	in >> salary;
	cout << "\tAllowance is=";
	in >> allowance;
	a1.setId(id);
	a1.setName(name);
	a1.setSalary(salary);
	a1.setAllowance(allowance);
	return in;
}