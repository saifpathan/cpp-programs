using namespace std;
#include<iostream>
class vehicle
{
public:
	virtual void brakes()
	{
		cout << "\nVehicle gets stop";
	}

};
class car :public vehicle
{
public:
	void brakes()
	{
		cout << "\nDrum brakes are applied in car";
	}
};

class bikes :public vehicle
{
public:
	void brakes()
	{
		cout << "\nDisk brakes are applied in bikes";
	}
};

class bus :public vehicle
{
public:
	void brakes()
	{
		cout << "\nAir brakes are applied in bus";
	}
};
void main()
{
	vehicle*v;

	v = new car();
	v->brakes();
	cout << "\n\n";

	v = new bikes();
	v->brakes();
	cout << "\n\n";

	v = new bus();
	v->brakes();
	cout << "\n\n";
}
