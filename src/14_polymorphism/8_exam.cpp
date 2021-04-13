using namespace std;
#include<iostream>
class exam
{
public:
	virtual void writeExam()
	{
		cout << "\nExam is conducted";
	}

};
class offline :public exam
{
public:
	void writeExam()
	{
		cout << "\nRollno. & hallno. is required in offine";
	}
};

class online :public exam
{
public:
	void writeExam()
	{
		cout << "\nLogin credentials are required in online";
	}
};

void main()
{
	exam*e;

	e = new offline();
	e->writeExam();
	cout << "\n\n";

	e = new online();
	e->writeExam();
	cout << "\n\n";
}
