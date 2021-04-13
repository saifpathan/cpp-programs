#include<stdio.h>
#include<string.h>
struct marks
{
	int rollno;
	char name[20];
	double percentage;
	int total;
	int rank;

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
	m1.setRollno(18);
	m1.setName("Saif");
	m1.setTotal(450);
	m1.setPercentage(90);
	m1.setRank(1);

	m1.display();

	printf("\n\nMarks details=(using get())");
	printf("\nRoll no. is=%d", m1.getRollno());
	printf("\nName is=%s", m1.getName());
	printf("\nTotal marks obtained=%d", m1.getTotal());
	printf("\nPercentage=%lf", m1.getPercentage());
	printf("\nRank=%d", m1.getRank());

	printf("\n\n");
}