#include<stdio.h>
#include<string.h>
class trainticket
{
	int pnrno;
	char passengername[20];
	char trainname[20];
	char boarding[20];
	char destination[20];
	int trainno;
	double fare;
public:
	trainticket()
	{
		this->pnrno = 14564;
		strcpy(this->passengername, "not given");
		strcpy(this->trainname, "Sahyadri express");
		strcpy(this->boarding, "pune");
		strcpy(this->destination, "mumbai");
		this->trainno = 787878;
		this->fare = 150;
	}
	trainticket(int p, char* pn, char* tn, char* b, char* d, int t, double f)
	{
		this->pnrno = p;
		strcpy(this->passengername, pn);
		strcpy(this->trainname, tn);
		strcpy(this->boarding, b);
		strcpy(this->destination, d);
		this->trainno=t;
		this->fare = f;
	}
	void setPnrno(int p)
	{
		this->pnrno = p;
	}
	void setPassengername(char* pn)
	{
		strcpy(this->passengername, pn);
	}
	void setTrainname(char* tn)
	{
		strcpy(this->trainname, tn);
	}
	void setBoarding(char* b)
	{
		strcpy(this->boarding, b);
	}
	void setDestination(char* d)
	{
		strcpy(this->destination, d);
	}
	void setTrainno(int t)
	{
		this->trainno = t;
	}
	void setFare(double f)
	{
		this->fare = f;
	}


	int getPnrno()
	{
		return this->pnrno;
	}
	char* getPassengername()
	{
		return this->passengername;
	}
	char* getTrainname()
	{
		return this->trainname;
	}
	char* getBoarding()
	{
		return this->boarding;
	}
	char* getDestination()
	{
		return this->destination;
	}
	int getTrainno()
	{
		return this->trainno;
	}
	double getFare()
	{
		return this->fare;
	}


	void display()
	{
		printf("\nTrain Ticket details=(using display())");
		printf("\nPNR no.= %d", this->pnrno);
		printf("\nPassenger Name = %s", this->passengername);
		printf("\nTrain Name = %s", this->trainname);
		printf("\nTrain no.= %d", this->trainno);
		printf("\nBoarding = %s", this->boarding);
		printf("\nDestination= %s", this->destination);
		printf("\nFare= %lf", this->fare);
		printf("\n\n");
	}
};

int main()
{
	trainticket t1;
	t1.display();
	t1.setPnrno(8331404);
	t1.setPassengername("Saif Pathan");
	t1.setTrainname("Coimbatore Express");
	t1.setTrainno(11013);
	t1.setBoarding("PUNE");
	t1.setDestination("SOLAPUR");
	t1.setFare(188.19);
	t1.display();
	printf("\n\n");
}