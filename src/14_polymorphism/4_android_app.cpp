using namespace std;
#include<iostream>
class androidapp
{
public:
	virtual void run()
	{
		cout << "\nApplication is run";
	}
	
};
class banking :public androidapp
{
public:
	void run()
	{
		cout << "\nMoney is transfered";
	}
};

struct socialmedia :public androidapp
{
public:
	void run()
	{
		cout << "\nMessage is sent";
	}
};

struct musicplayer :public androidapp
{
public:
	void run()
	{
		cout << "\nMusic is played";
	}
};

void main()
{
	androidapp*ap;

	ap = new banking();
	ap->run();
	cout << "\n\n";

	ap = new socialmedia();
	ap->run();
	cout << "\n\n";

	ap = new musicplayer();
	ap->run();
	cout << "\n\n";
	
}