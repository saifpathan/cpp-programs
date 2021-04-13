using namespace std;
#include<string.h>
#include<iostream>

class marks
{
	int rollno;
	char name[20];
	double percentage;
	int total;
	int rank;
public:
	marks()
	{
		this->rollno = 0;
		strcpy(this->name, "Not yet set");
		this->percentage = 0.00;
		this->total = 0;
		this->rank = 0;
	}
	marks(int rollno, char* name, double percentage,int total,int rank)
	{
		this->rollno = rollno;
		strcpy(this->name, name);
		this->percentage = percentage;
		this->total = total;
		this->rank = rank;
	}
	void setRollno(int rollno)
	{
		this->rollno = rollno;
	}
	void setName(char* name)
	{
		strcpy(this->name, name);
	}
	void setPercentage(double percentage)
	{
		this->percentage = percentage;
	}
	void setTotal(int total)
	{
		this->total = total;
	}
	void setRank(int rank)
	{
		this->rank = rank;
	}
	int getRollno()
	{
		return this->rollno;
	}
	char* getName()
	{
		return this->name;
	}
	double getPercentage()
	{
		return this->percentage;
	}
	int getTotal()
	{
		return this->total;
	}
	int getRank()
	{
		return this->rank;
	}
	void display()

	{
		cout << "\n\t Roll no : " << getRollno();
		cout << "\n\t Student Name : " << getName();
		cout << "\n\t Percentage Obtainted : " << getPercentage();
		cout << "\n\t Total Marks : " << getTotal();
		cout << "\n\t Rank : " << getRank();
		cout << "\n\n";
	}
};
ostream& operator<<(ostream&, marks&);
istream& operator>>(istream&, marks&);
void main()
{
	marks m1;
	cout << "\n\t Enter details of student 1";
	cin >> m1;
	cout << "\n\n";

	marks m2(100, "Not yet set", 100.10,200,10);
	cout << "\n\t Enter details of student 2";
	cin >> m2;
	cout << "\n\n";
	cout << "\n\t Student 1 is";
	cout << m1;
	cout << "\n\n";
	cout << "\n\t Student 2 is";
	cout << m2;
	cout << "\n\n";
}
ostream& operator<<(ostream& out, marks& m1)
{
	out << "\n\t Roll no : " << m1.getRollno();
	out << "\n\t Student Name : " << m1.getName();
	out << "\n\t Percentage obtained : " << m1.getPercentage();
	out << "\n\t Total Marks : " << m1.getTotal();
	out << "\n\t Rank : " << m1.getRank();
	out << "\n\n";
	return out;
}
istream& operator>>(istream& in, marks& m1)
{
	int rollno;
	char name[20];
	double percentage;
	int total;
	int rank;
	
	cout << "\n\t Enter Roll no : ";
	in >> rollno;
	cout << "\t Enter name : ";
	in >> name;
	cout << "\t Enter percentage : ";
	in >> percentage;
	cout << "\t Enter total marks : ";
	in >> total;
	cout << "\t Enter rank : ";
	in >> rank;
	m1.setRollno(rollno);
	m1.setName(name);
	m1.setPercentage(percentage);
	m1.setTotal(total);
	m1.setRank(rank);
	return in;
}
