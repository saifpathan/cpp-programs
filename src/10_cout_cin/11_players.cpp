using namespace std;
#include<iostream>
#include<string.h>
class cricketer
{
	int nmp, runs, wt;
	char name[50];
public:
	cricketer()
	{
		strcpy(this->name, "Unknown");
		this->nmp = 0;
		this->runs = 0;
		this->wt = 0;
	}
	cricketer(char*name, int nmp, int runs, int wt)
	{
		strcpy(this->name, name);
		this->nmp = nmp;
		this->runs = runs;
		this->wt = wt;
	}
	void setName()
	{
		cout << "\tEnter player's name=";
		cin >> this->name;
	}
	void setNmp()
	{
		cout << "\tEnter number of matches played=";
		cin >> this->nmp;
	}
	void setRuns()
	{
		cout << "\tEnter total runs scored=";
		cin >> this->runs;
	}
	void setWicketstaken()
	{
		cout << "\tEnter total wickets taken=";
		cin >> this->wt;
	}
	char* getName()
	{
		return this->name;
	}
	int getNmp()
	{
		return this->nmp;
	}
	int getRuns()
	{
		return this->runs;
	}
	int getWt()
	{
		return this->wt;
	}
	void display()
	{
		cout << "\n\tName of player is=" << getName();
		cout << "\n\tNumber of matches played by player is=" << getNmp();
		cout << "\n\tTotal runs scored by player is=" << getRuns();
		cout << "\n\tTotal wickets taken by player is=" << getWt();
		cout << "\n\n\n";
	}
};
void storeInfo(cricketer*);
void displayInfo(cricketer*);
void displayMaxruns(cricketer*);
void displayMaxwickets(cricketer*);

void main()
{
	cricketer * c1;
	c1 = new cricketer[10];
	storeInfo(c1);
	displayInfo(c1);
	displayMaxruns(c1);
	displayMaxwickets(c1);
}
void storeInfo(cricketer*c1)
{
	int i, j = 1;
	for (i = 0; i < 10; i++)
	{
		cout << "\nEnter details of player=" << j << "\n";
		c1[i].setName();
		c1[i].setNmp();
		c1[i].setRuns();
		c1[i].setWicketstaken();
		cout << "\n\n";
		j++;
	}
}
void displayInfo(cricketer*c1)
{
	int i, j = 1;
	for (i = 0; i < 10; i++)
	{
		cout << "\nDetails of player=" << j << "\n";
		c1[i].display();
		j++;
	}
}
void displayMaxruns(cricketer*c1)
{
	int i, max;
	max = c1[0].getRuns();
	for (i = 0; i < 10; i++)
	{
		if (max<c1[i].getRuns())
		{
			max = c1[i].getRuns();
		}
	}
	cout << "\nMaximum runs scored are\n"<<max;
	for (i = 0; i < 10; i++)
	{
		if (max == c1[i].getRuns())
		{
			cout<<"\nPlayer who made maximum runs="<<c1[i].getName();
		}
	}
}
void displayMaxwickets(cricketer*c1)
{
	int i, max;
	max = c1[0].getWt();
	for (i = 0; i < 10; i++)
	{
		if (max<c1[i].getWt())
		{
			max = c1[i].getWt();
		}
	}
	cout << "\nMaximum wickets taken are\n" << max;
	for (i = 0; i < 10; i++)
	{
		if (max == c1[i].getWt())
		{
			cout << "\nPlayer who had taken maximum wickets=" << c1[i].getName();
		}
	}
}