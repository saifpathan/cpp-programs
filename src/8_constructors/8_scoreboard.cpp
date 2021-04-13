#include<stdio.h>
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
		printf("\nScoreboard details=(using display())");
		printf("\nJersey no. is=%d", this->jerseyno);
		printf("\nName is=%s", this->name);
		printf("\nTeam=%s", this->team);
		printf("\nTotal runs scored=%d", this->runs);
		printf("\nTotal sixes=%d", this->totalsixes);
		printf("\n\n");
	}
};

int main()
{
	scoreboard s1;
	s1.display();
	s1.setJerseyno(18);
	s1.setName("Virat");
	s1.setTeamname("INDIA");
	s1.setRuns(90);
	s1.setTotalsixes(9);
	s1.display();
	printf("\n\n");
}