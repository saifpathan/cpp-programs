using namespace std;
#include<iostream>
class student
{
	int roll;
	char name[20];
	static int count;
public:
	student()
	{
		count++;
	}
	~student()
	{
		count--;
	}
	static int getCount()
	{
		return count;
	}
};
int student::count = 0;
void myfun();
void main()
{
	cout<<"\n"<<student::getCount();//0
	student s1, s2;
	cout << "\n" << student::getCount();//2
	myfun();
	cout << "\n" << student::getCount();//2
	cout << "\n\n\n";

	student s3, s4, s5;
	cout << "\n" << student::getCount();//5
	cout << "\n\n\n";
}
void myfun()
{
	student s3;
	cout << "\n" << student::getCount();//3
}