using namespace std;
#include<iostream>
#include<string.h>
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
		this->rollno = 10;
		strcpy(this->name, "not given");
		this->percentage = 80.2;
		this->total = 410;
		this->rank = 5;
	}
	marks(int r, char* nm, double p, int t, int rn)
	{
		this->rollno = r;
		strcpy(this->name, nm);
		this->percentage = p;
		this->total = t;
		this->rank = rn;
	}

	void setRollno(int r)
	{
		this->rollno = r;
	}
	void setName(char* nm)
	{
		strcpy(this->name, nm);
	}
	void setTotal(int t)
	{
		this->total = t;
	}
	void setPercentage(double p)
	{
		this->percentage = p;
	}
	void setRank(int rn)
	{
		this->rank = rn;
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
		cout<<"\nMarks details=(using display())";
		cout<<"\nRoll no. is="<<this->rollno;
		cout<<"\nName is="<<this->name;
		cout<<"\nTotal marks obtained="<<this->total;
		cout<<"\nPercentage="<<this->percentage;
		cout<<"\nRank="<<this->rank;
		cout<<"\n\n";
	}
};

int main()
{
	marks*ptr;
	ptr = new marks();
	ptr->display();
	delete ptr;

	marks*p1;
	p1 = new marks(18, "Saif", 450, 90, 1);
	p1->display();
	delete p1;
	cout<<"\n\n";
}