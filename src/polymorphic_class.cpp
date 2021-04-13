using namespace std;
#include<iostream>
class Myclass
{
	virtual void myfun()
	{

	}
};
void main()
{
	cout << "\nSize of myclass is=" << sizeof(Myclass);
	cout << "\n\n";
}

//virtual fun add kiye to polymorphic class bnta h aur 4 bytes size hoti h

void main1()
{
	Myclass obj1;
	cout << "\nSize of myclass is=" << sizeof(obj1);
	cout << "\n\n";
}