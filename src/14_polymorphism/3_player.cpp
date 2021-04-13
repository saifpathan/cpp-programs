using namespace std;
#include<iostream>
class player
{
public:
	virtual void play()
	{
		cout << "\nPlayer play the game";
	}
	
};
class football :public player
{
public:
	void play()
	{
		cout << "\nRonaldo kicks the football";
	}
};

struct cricket :public player
{
public:
	void play()
	{
		cout << "\nVirat hits a sixer";
	}
};

class kabaddi :public player
{
public:
	void play()
	{
		cout << "\nAnup kumar makes a raid";
	}
};
void main()
{
	player*pl;

	pl = new football();
	pl->play();
	cout << "\n\n";

	pl = new cricket();
	pl->play();
	cout << "\n\n";

	pl = new kabaddi();
	pl->play();
	cout << "\n\n";
	
}