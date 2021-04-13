#include<stdio.h>
#include<string.h>
struct bankdetails
{
	int accountno;
	char name[20];
	double deposit;
	char branch[20];

	void setAccountno(int ac)
	{
		this->accountno = ac;
	}
	void setName(char* nm)
	{
		strcpy(this->name, nm);
	}
	void setDeposit(double d)
	{
		this->deposit = d;
	}
	void setBranch(char*b)
	{
		strcpy(this->branch,b);
	}


	int getAccountno()
	{
		return this->accountno;
	}
	char* getName()
	{
		return this->name;
	}
	double getDeposit()
	{
		return this->deposit;
	}
	char* getBranch()
	{
		return this->branch;
	}


	void display()
	{
		printf("\nBank deposit details=(using display())");
		printf("\nAccount no. is=%d", this->accountno);
		printf("\nName is=%s", this->name);
		printf("\nDeposit Amount is=%lf", this->deposit);
		printf("\nBranch name is=%s", this->branch);
		printf("\n\n");
	}
};

int main()
{
	bankdetails b1;
	b1.setAccountno(624985);
	b1.setName("Saif");
	b1.setDeposit(20000);
	b1.setBranch("Omerga");
	
	b1.display();

	printf("\n\nBank deposit details=(using get())");
	printf("\nAccount no. is=%d", b1.getAccountno());
	printf("\nName is=%s", b1.getName());
	printf("\nDeposit Amount is=%lf", b1.getDeposit());
	printf("\nBranch name is=%s", b1.getBranch());
	
	printf("\n\n");
}