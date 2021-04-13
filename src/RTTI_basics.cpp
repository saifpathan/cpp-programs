using namespace std;
#include<iostream>
class Base
{
	virtual void fun()
	{

	}
};
class Derived :public Base
{

};
void main()
{

	Base* bptr;
	Derived dobj;

	bptr = &dobj;

	cout << "\nType of bobj is=" << typeid(bptr).name();
	cout << "\nType of bptr is=" << typeid(*bptr).name();
	cout << "\nType of dobj is=" << typeid(dobj).name();
	cout << "\n\n";
	if (strcmp(typeid(*bptr).name(), "class Derived") == 0)
	{
		cout << "\nMatched\n";
	}
	else
	{
		cout << "\nBye\n";
	}
}
void main1()
{
	Base bobj;
	Base* bptr;
	Derived dobj;

	cout << "\nType of bobj is=" << typeid(bobj).name();
	cout << "\nType of bptr is=" << typeid(bptr).name();
	cout << "\nType of dobj is=" << typeid(dobj).name();
	cout << "\n\n";
}
void main11()
{
	int* ptr;
	int a1;
	float f1;
	double d1;
	char ch1;

	cout << "\nType of *ptr is=" << typeid(*ptr).name();
	cout << "\nType of ptr is=" << typeid(ptr).name();
	cout << "\nType of a1 is=" << typeid(a1).name();
	cout << "\nType of f1 is=" << typeid(f1).name();
	cout << "\nType of d1 is=" << typeid(d1).name();
	cout << "\nType of ch1 is=" << typeid(ch1).name();
	cout << "\n\n";
}