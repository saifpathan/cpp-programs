using namespace std;
#include<iostream>
#include<string.h>
class scoreboard
{
	int jerseyno;
	char name[20];
	char team[20];
	int totalsixes;
	int runs;
public:
	scoreboard()
	{
		this->jerseyno = 7;
		strcpy(this->name, "not given");
		strcpy(this->team, "not given");
		this->totalsixes = 8;
		this->runs = 125;
	}
	scoreboard(int j, char* nm, char* tm, int t, int r)
	{
		this->jerseyno = j;
		strcpy(this->name, nm);
		strcpy(this->team, tm);
		this->totalsixes = t;
		this->runs = r;
	}
	void setJerseyno(int j)
	{
		this->jerseyno = j;
	}
	void setName(char* nm)
	{
		strcpy(this->name, nm);
	}
	void setTeamname(char* tm)
	{
		strcpy(this->team, tm);
	}
	void setTotalsixes(int t)
	{
		this->totalsixes = t;
	}
	void setRuns(int rn)
	{
		this->runs = rn;
	}


	int getJerseyno()
	{
		return this->jerseyno;
	}
	char* getName()
	{
		return this->name;
	}
	char* getTeamname()
	{
		return this->team;
	}
	int getTotalsixes()
	{
		return this->totalsixes;
	}
	int getRuns()
	{
		return this->runs;
	}


	void display()
	{
		cout<<"\nScoreboard details=(using display())";
		cout<<"\nJersey no. is="<<this->jerseyno;
		cout<<"\nName is="<<this->name;
		cout<<"\nTeam="<<this->team;
		cout<<"\nTotal runs scored="<<this->runs;
		cout<<"\nTotal sixes="<<this->totalsixes;
		cout<<"\n\n";
	}
};

int main()
{
	scoreboard*ptr;
	ptr = new scoreboard();
	ptr->display();
	delete ptr;

	scoreboard*p1;
	p1 = new scoreboard(18, "Virat", "INDIA", 90, 9);
	p1->display();
	delete p1;
	cout<<"\n\n";
}