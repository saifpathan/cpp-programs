using namespace std;
#include<iostream>
#include<string.h>
class hr
{
	int id;
	char name[20];
	double salary;
	double commission;
public:
	hr()
	{
		this->id = 0;
		strcpy(this->name, "not given");
		this->salary = 0;
		this->commission = 0;
	}
	hr(int i, char*nm, double s, double a)
	{
		this->id = i;
		strcpy(this->name, nm);
		this->salary = s;
		this->commission = a;
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
	void setCommission(double a)
	{
		this->commission= a;
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
	double getCommission()
	{
		return this->commission;
	}


	void display()
	{
		cout << "\nHR details=";
		cout << "\nI.D. is=" << getId();
		cout << "\nName is=" << getName();
		cout << "\nSalary is=" << getSalary();
		cout << "\nCommission is=" << getCommission();
		cout << "\n\n";
	}
};
ostream& operator<<(ostream&, hr&);
istream& operator>>(istream&, hr&);

void main()
{
	hr h1;
	cout << "\n\tEnter details of admin h1";
	cin >> h1;
	cout << "\n\n";

	hr h2(30, "Saif", 35000.75, 4000.60);
	cout << "\n\tEnter details of admin h2";
	cin >> h2;
	cout << "\n\n";

	cout << "\n\tHR h1 is";
	cout << h1;
	cout << "\n\n";
	cout << "\n\tHR h2 is";
	cout << h2;
	cout << "\n\n";
}
ostream& operator<<(ostream& out, hr& h1)
{
	out << "\nI.D. is=" << h1.getId();
	out << "\nName is=" << h1.getName();
	out << "\nSalary is=" << h1.getSalary();
	out << "\nCommission is=" << h1.getCommission();
	out << "\n\n";
	return out;
}
istream& operator>>(istream& in, hr& h1)
{
	int id;
	char name[20];
	double salary;
	double commission;
	cout << "\n\tI.D. is=";
	in >> id;
	cout << "\tName is=";
	in >> name;
	cout << "\tSalary is=";
	in >> salary;
	cout << "\tCommission is=";
	in >> commission;
	h1.setId(id);
	h1.setName(name);
	h1.setSalary(salary);
	h1.setCommission(commission);
	return in;
}