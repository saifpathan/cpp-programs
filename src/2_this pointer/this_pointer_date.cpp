#include<stdio.h>
struct date
{
	int day;
	int month;
	int year;

	void setDay(int d)
	{
		this->day = d;
	}
	void setMonth(int m)
	{
		this->month = m;
	}
	void setYear(int y)
	{
		this->year = y;
	}
	int getDay()
	{
		return this->day;
	}
	int getMonth()
	{
		return this->month;
	}
	int getYear()
	{
		return this->year;
	}
};
int main()
{
	date d1;
	d1.setDay(11);
	d1.setMonth(06);
	d1.setYear(2020);
	printf("\nThe given date is=%d/%d/%d\n\n", d1.getDay(), d1.getMonth(), d1.getYear());
}