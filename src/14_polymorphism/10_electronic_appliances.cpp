using namespace std;
#include<iostream>
class electronicAppliances
{
public:
	virtual void conserveEnergy()
	{
		cout << "\nElectricity is consumed in kwh";
	}

};
class bulb :public electronicAppliances
{
public:
	void conserveEnergy()
	{
		cout << "\n3 kwh is consumed by Bulb in 1hr/day";
	}
};

class fan :public electronicAppliances
{
public:
	void conserveEnergy()
	{
		cout << "\n2.1 kwh is consumed by Fan in 1hr/day";
	}
};

class electricIron :public electronicAppliances
{
public:
	void conserveEnergy()
	{
		cout << "\n21 kwh is consumed by Iron in 1hr/day";
	}
};
void main()
{
	electronicAppliances*e;

	e = new bulb();
	e->conserveEnergy();
	cout << "\n\n";

	e = new fan();
	e->conserveEnergy();
	cout << "\n\n";

	e = new electricIron();
	e->conserveEnergy();
	cout << "\n\n";
}
