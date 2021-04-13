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
	t1.setPnrno(8331404);
	t1.setPassengername("Saif Pathan");
	t1.setTrainname("Coimbatore Express");
	t1.setTrainno(11013);
	t1.setBoarding("PUNE");
	t1.setDestination("SOLAPUR");
	t1.setFare(188.19);
	t1.display();

	printf("\n\nTrain Ticket details=(using get())");
	printf("\nPNR no.= %d", t1.getPnrno());
	printf("\nPassenger Name = %s", t1.getPassengername());
	printf("\nTrain name = %s", t1.getTrainname());
	printf("\nTrain no.= %d", t1.getTrainno());
	printf("\nBoarding = %s", t1.getBoarding());
	printf("\nDestination = %s", t1.getDestination());
	printf("\nFare = %lf", t1.getFare());

	printf("\n\n");
}