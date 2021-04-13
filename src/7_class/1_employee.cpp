#include<stdio.h>
#include<string.h>
class employee
{
	int id;
	char name[20];
	double salary;
	
public:
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

	void display()
	{
		printf("\nEmpoyee details=(using display())");
		printf("\nI.D. is=%d", this->id);
		printf("\nName is=%s", this->name);
		printf("\nSalary is=%lf", this->salary);
		printf("\n\n");
	}
};

int main()
{
	employee e1;
	e1.setId(100);
	e1.setName("Saif");
	e1.setSalary(25000.75);
	e1.display();

	printf("\n\nEmpoyee details=(using get())");
	printf("\nI.D. is=%d", e1.getId());
	printf("\nName is=%s", e1.getName());
	printf("\nsalary is=%lf", e1.getSalary());
	printf("\n\n");
}