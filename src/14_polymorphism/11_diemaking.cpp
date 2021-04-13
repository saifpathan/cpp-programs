using namespace std;
#include<iostream>
class dieMaking
{
public:
	virtual void operation()
	{
		cout << "\nTo cut/or to form material to desired shape";
	}

};
class blanking :public dieMaking
{
public:
	void operation()
	{
		cout << "\nBlanking produces a flat piece of material by cutting the desired shape";
	}
};

class forming :public dieMaking
{
public:
	void operation()
	{
		cout << "\nForming dies to bend the blank along curved surface";
	}
};

class piercing :public dieMaking
{
public:
	void operation()
	{
		cout << "\nPiercing operation is uesd to pierce holes in stampings";
	}
};
void main()
{
	dieMaking*d;

	d = new blanking();
	d->operation();
	cout << "\n\n";

	d = new forming();
	d->operation();
	cout << "\n\n";

	d = new piercing();
	d->operation();
	cout << "\n\n";
}
