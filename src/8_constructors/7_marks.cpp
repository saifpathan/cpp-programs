#include<stdio.h>
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
		printf("\nMarks details=(using display())");
		printf("\nRoll no. is=%d", this->rollno);
		printf("\nName is=%s", this->name);
		printf("\nTotal marks obtained=%d", this->total);
		printf("\nPercentage=%lf", this->percentage);
		printf("\nRank=%d", this->rank);
		printf("\n\n");
	}
};

int main()
{
	marks m1;
	m1.display();
	m1.setRollno(18);
	m1.setName("Saif");
	m1.setTotal(450);
	m1.setPercentage(90);
	m1.setRank(1);

	m1.display();
	printf("\n\n");
}