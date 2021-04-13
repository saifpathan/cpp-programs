using namespace std;
#include<iostream>
class defenseDept
{
public:
	virtual void attack()
	{
		cout << "\nAttack order recieved";
	}
};
class army :public defenseDept
{
public:
	void attack()
	{
		cout << "\nAttack done from ground level";
	}
};
class navy :public defenseDept
{
public:
	void attack()
	{
		cout << "\nAttack done from ship";
	}
};
class airforce :public defenseDept
{
public:
	void attack()
	{
		cout << "\nAttack done from fighterjet";
	}
};
void main()
{
	defenseDept*dp;
	
	dp = new army();
	dp->attack();
	cout << "\n\n";

	dp = new navy();
	dp->attack();
	cout << "\n\n";

	dp = new airforce();
	dp->attack();
	cout << "\n\n";
}