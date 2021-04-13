#include<stdio.h>
struct time
{
	int hh;
	int mm;
	int ss;

	void setHours(int h)
	{
		this->hh = h;
	}
	void setMinutes(int m)
	{
		this->mm = m;
	}
	void setSeconds(int s)
	{
		this->ss = s;
	}
	int getHours()
	{
		return this->hh;
	}
	int getMinutes()
	{
		return this->mm;
	}
	int getSeconds()
	{
		return this->ss;
	}
};
int main()
{
	time d1;
	d1.setHours(05);
	d1.setMinutes(55);
	d1.setSeconds(30);
	printf("\nThe given time is= %dhh: %dmm: %dss\n\n", d1.getHours(), d1.getMinutes(), d1.getSeconds());
}