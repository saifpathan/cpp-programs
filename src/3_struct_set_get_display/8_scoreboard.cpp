#include<stdio.h>
#include<string.h>
struct scoreboard
{
	int jerseyno;
	char name[20];
	char team[20];
	int totalsixes;
	int runs;

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
	s1.setJerseyno(18);
	s1.setName("Virat");
	s1.setTeamname("INDIA");
	s1.setRuns(90);
	s1.setTotalsixes(9);

	s1.display();

	printf("\n\nScoreboard details=(using get())");
	printf("\nJersey no. is=%d",s1.getJerseyno());
	printf("\nName is=%s", s1.getName());
	printf("\nTeam=%s", s1.getTeamname());
	printf("\nTotal runs scored=%d", s1.getRuns());
	printf("\nTotal sixes=%d",s1.getTotalsixes());

	printf("\n\n");
}