using namespace std;
#include<iostream>
class Myclass
{

};
void main11()
{
	cout << "\nSize of myclass is=" << sizeof(Myclass);
	cout << "\n\n";
}

//object b banaoge to b 1 byte hi size milega

void main()
{
	Myclass obj1;
	cout << "\nSize of myclass is=" << sizeof(obj1);
	cout << "\n\n";
}