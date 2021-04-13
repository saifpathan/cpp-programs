#include<stdio.h>
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
		this->id = 100;
		strcpy(this->name, "not given");
		this->salary = 15448.36;
		this->commission = 1500.25;
	}
	hr(int i,char* nm,double s,double c)
	{
		this->id = i;
		strcpy(this->name, nm);
		this->salary = s;
		this->commission = c;
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
	void setCommission(double c)
	{
		this->commission = c;
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
		printf("\nHR details=(using display())");
		printf("\nI.D. is=%d", this->id);
		printf("\nName is=%s", this->name);
		printf("\nSalary is=%lf", this->salary);
		printf("\nCommission is=%lf", this->commission);
		printf("\n\n");
	}
};

int main()
{
	hr h1;
	h1.display();
	h1.setId(07);
	h1.setName("Saif");
	h1.setSalary(48000.75);
	h1.setCommission(6000.60);
	h1.display();

	printf("\n\n");
}