using namespace std;
#include<iostream>
class metalCutting
{
public:
	virtual void cut()
	{
		cout << "\nTo cut material to desired shape";
	}

};
class grinder :public metalCutting
{
public:
	void cut()
	{
		cout << "\nMaterial is cut by hand-held grinder";
	}
};

class lasercut :public metalCutting
{
public:
	void cut()
	{
		cout << "\nMaterial is cut by laser";
	}
};

class wirecut :public metalCutting
{
public:
	void cut()
	{
		cout << "\nMetal is cut by wire";
	}
};
void main()
{
	metalCutting*m;

	m = new grinder();
	m->cut();
	cout << "\n\n";

	m = new lasercut();
	m->cut();
	cout << "\n\n";

	m = new wirecut();
	m->cut();
	cout << "\n\n";
}
