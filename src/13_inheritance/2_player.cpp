using namespace std;
#include<iostream>
class player
{
	char name[20];
	char teamname[20];
	int jerseyno;
public:
	void setName(char* nm)
	{
		strcpy(this->name, nm);
	}
	char* getName()
	{
		return this->name;
	}
	void setTeamname(char* tm)
	{
		strcpy(this->teamname, tm);
	}
	char* getTeamname()
	{
		return this->teamname;
	}
	void setJerseyno(int j)
	{
		this->jerseyno = j;
	}
	int getJerseyno()
	{
		return this->jerseyno;
	}
	player()
	{
		cout << "\nPlayer Default Constructor is called";
		this->jerseyno = 100;
		strcpy(this->name, "Not given");
		strcpy(this->teamname, "Not given");
	}
	player(int j, char*nm, char *tm)
	{
		cout << "\nPlayer Paramaterised Constructor is called";
		this->jerseyno = j;
		strcpy(this->name, nm);
		strcpy(this->teamname, tm);
	}
	void display()
	{
		cout << "\nJersey no. is=" << this->jerseyno;
		cout << "\nName is=" << this->name;
		cout << "\nTeam name is=" << this->teamname;
	}
};
class football :public player
{
	int no_of_goals;
	int no_of_penalties;
	int no_of_freekicks;
public:
	int getNoofgoals()
	{
		return this->no_of_goals;
	}
	void setNoofgoals(int nog)
	{
		this->no_of_goals = nog;
	}
	void setNoofpenalties(int nop)
	{
		this->no_of_penalties = nop;
	}
	int getNoofpenalties()
	{
		return this->no_of_penalties;
	}
	void setNooffreekicks(int nof)
	{
		this->no_of_freekicks = nof;
	}
	int getNooffreekicks()
	{
		return this->no_of_freekicks;
	}
	football() :player()//parameter initialisation list
	{
		cout << "\nFootball Player Default Constructor is called";
		this->no_of_goals = 22;
		this->no_of_penalties = 50;
		this->no_of_freekicks = 15;
	}
	football(int j, char*nm, char *tm, int nog, int nop, int nof):player(j, nm, tm)//parameter initialisation list
	{
		cout << "\nFootball Player Paramaterised Constructor is called";
		this->no_of_goals = nog;
		this->no_of_penalties = nop;
		this->no_of_freekicks = nof;
	}
	void display()
	{
		player::display();
		cout << "\nNo.of goal is=" << this->no_of_goals;
		cout << "\nNo.of penalties is=" << this->no_of_penalties;
		cout << "\nNo. of free kicks is=" << this->no_of_freekicks;
	}
};

struct cricket :public player
{
	int no_of_catches;
	int no_of_runs;
	int no_of_wickets;
public:
	cricket() :player()//parameter initialisation list
	{
		cout << "\nCricket Player Constructor is called";
		this->no_of_catches = 4;
		this->no_of_runs = 110;
		this->no_of_wickets = 2;
	}
	cricket(int j, char*nm, char *tm, int noc, int nor, int now) :player(j, nm, tm)//parameter initialisation list
	{
		cout << "\nCricket Player Paramaterised Constructor is called";
		this->no_of_catches = noc;
		this->no_of_runs = nor;
		this->no_of_wickets = now;
	}
	int getNoofcatches()
	{
		return this->no_of_catches;
	}
	void setNoofcatches(int noc)
	{
		this->no_of_catches = noc;
	}
	void setNoofruns(int nor)
	{
		this->no_of_runs = nor;
	}
	int getNoofruns()
	{
		return this->no_of_runs;
	}
	void setNoofwickets(int now)
	{
		this->no_of_wickets = now;
	}
	int getNoofwickets()
	{
		return this->no_of_wickets;
	}
	void display()
	{
		player::display();
		cout << "\nNo. of Catches are=" << this->no_of_catches;
		cout << "\nNo. of runs are=" << this->no_of_runs;
		cout << "\nNo. of wickets are=" << this->no_of_wickets;
	}
};

class kabaddi :public player
{
	int no_of_raids;
	int no_of_tacklepoints;
public:
	kabaddi() :player()//parameter initialisation list
	{
		cout << "\nKabaddi Player Default Constructor is called";
		this->no_of_raids = 22;
		this->no_of_tacklepoints = 18;
	}
	kabaddi(int j, char*nm, char *tm, int nord, int not) :player(j, nm, tm)//parameter initialisation list
	{
		cout << "\nKabaddi Player Paramaterised Constructor is called";
		this->no_of_raids = nord;
		this->no_of_tacklepoints = not;
	}
	int getNoofraids()
	{
		return this->no_of_raids;
	}
	void setNoofraids(int nord)
	{
		this->no_of_raids = nord;
	}
	void setNooftacklepoints(int not)
	{
		this->no_of_tacklepoints = not;
	}
	int getNooftacklepoints()
	{
		return this->no_of_tacklepoints;
	}
	void display()
	{
		player::display();
		cout << "\nNo.of raids=" << this->no_of_raids;
		cout << "\nNo.of tackle points=" << this->no_of_tacklepoints;
	}
};
void main()
{
	football f1;
	f1.display();
	cout << "\n\n";

	football f2(7,"Cristiano Ronaldo","Juventus F.C.",8,2,5);
	f2.display();
	cout << "\n\n";

	cricket c1;
	c1.display();
	cout << "\n\n";

	cricket c2(18,"Virat Kohli","INDIA",5,125,2);
	c2.display();
	cout << "\n\n";

	kabaddi k1;
	k1.display();
	cout << "\n\n";

	kabaddi k2(7,"Anup Kumar","U Mumba",155,80);
	k2.display();
	cout << "\n\n";
}