using namespace std;
#include<iostream>
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
		this->trainno = t;
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
		cout<<"\nTrain Ticket details=(using display())";
		cout<<"\nPNR no.="<<this->pnrno;
		cout<<"\nPassenger Name="<<this->passengername;
		cout<<"\nTrain Name ="<<this->trainname;
		cout<<"\nTrain no.="<<this->trainno;
		cout<<"\nBoarding ="<<this->boarding;
		cout<<"\nDestination="<<this->destination;
		cout<<"\nFare="<<this->fare;
		cout<<"\n\n";
	}
};

void main()
{
	trainticket*ptr;
	ptr = new trainticket();
	ptr->display();
	delete ptr;

	trainticket*p1;
	p1 = new trainticket(1456, "Saif Pathan", "Sahyadri Express", "Pune", "Solapur", 45687, 156.75);
	p1->display();
	delete p1;
	cout<<"\n\n";
}