using namespace std;
#include<iostream>
class doctor
{
public:
	virtual void operation()
	{
		cout << "\nOperation is done";
	}

};
class heartSurgeon :public doctor
{
public:
	void operation()
	{
		cout << "\nHeart Surgery is done";
	}
};

class neuroSurgeon :public doctor
{
public:
	void operation()
	{
		cout << "\nBrain Surgery is done";
	}
};

class gynacologist :public doctor
{
public:
	void operation()
	{
		cout << "\nBaby is delivered";
	}
};
void main()
{
	doctor*d;

	d = new heartSurgeon();
	d->operation();
	cout << "\n\n";

	d = new neuroSurgeon();
	d->operation();
	cout << "\n\n";

	d = new gynacologist();
	d->operation();
	cout << "\n\n";
}
