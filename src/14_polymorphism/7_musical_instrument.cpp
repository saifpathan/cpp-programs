using namespace std;
#include<iostream>
class musicalInstrument
{
public:
	virtual void play()
	{
		cout << "\nInstrument gets played";
	}

};
class guitar :public musicalInstrument
{
public:
	void play()
	{
		cout << "\nGuitar is played";
	}
};

class casio :public musicalInstrument
{
public:
	void play()
	{
		cout << "\nCasio is played";
	}
};

class flute :public musicalInstrument
{
public:
	void play()
	{
		cout << "\nFlute is played";
	}
};
void main()
{
	musicalInstrument*m;

	m = new guitar();
	m->play();
	cout << "\n\n";

	m = new casio();
	m->play();
	cout << "\n\n";

	m = new flute();
	m->play();
	cout << "\n\n";
}
