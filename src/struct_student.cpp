#include<stdio.h>
#include<string.h>
struct marks
{
	int rollno;
	char name[20];

	void setRollno(int r)
	{
		this->rollno = r;
	}
	void setName(char* nm)
	{
		strcpy(this->name, nm);
	}


	int getRollno()
	{
		return this->rollno;
	}
	char* getName()
	{
		return this->name;
	}


	void display()
	{
		printf("\nStudent details=(using display())");
		printf("\nRoll no. is=%d", this->rollno);
		printf("\nName is=%s", this->name);
		printf("\n\n");
	}
};

int main()
{
	marks m1;
	m1.setRollno(10);
	m1.setName("Sachin");

	m1.display();

	printf("\n\nMarks details=(using get())");
	printf("\nRoll no. is=%d", m1.getRollno());
	printf("\nName is=%s", m1.getName());
	printf("\n\n");
}