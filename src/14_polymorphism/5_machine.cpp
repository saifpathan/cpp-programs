using namespace std;
#include<iostream>
class machine
{
public:
	virtual void start()
	{
		cout << "\nMachine gets started";
	}
	
};
class fan :public machine
{
public:
	void start()
	{
		cout << "\nFan starts rotating";
	}
};

class laptop :public machine
{
public:
	void start()
	{
		cout << "\nLaptop starts doing operations";
	}
};

class tv :public machine
{
public:
	void start()
	{
		cout << "\nTv starts telecasting channels";
	}
};
void main()
{
	machine*m;

	m = new fan();
	m->start();
	cout << "\n\n";

	m = new laptop();
	m->start();
	cout << "\n\n";

	m = new tv();
	m->start();
	cout << "\n\n";
}
