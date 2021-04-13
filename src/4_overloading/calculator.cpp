#include<stdio.h>
struct calculator
{
	int a;
	double b;
	void setA(int a)
	{
		this->a = a;
	}
	void setB(double b)
	{
		this->b = b;
	}
	int getA()
	{
		return this->a;
	}
	int getB()
	{
		return this->b;
	}
	void display()
	{
		printf("\n\t\t Answer is=%d \n", this->a);
	}
	void display1()
	{
		printf("\n\t\t Answer is=%lf \n", this->b);
	}
	void add(int x,int y)
	{
		this->a = x + y;
	}
	void add(int x, double y)
	{
		this->b = x + y;
	}
	void add(double x, double y)
	{
		this->b = x + y;
	}
	void add(int x, double y, int z)
	{
		this->b = x + y+ z;
	}

	void sub(int x, int y)
	{
		this->a = x - y;
	}
	void sub(int x, double y)
	{
		this->b = x - y;
	}
	void sub(double x, double y)
	{
		this->b = x - y;
	}
	void sub(int x, double y, int z)
	{
		this->b = x - y - z;
	}

	void multiply(int x, int y)
	{
		this->a = x * y;
	}
	void multiply(int x, double y)
	{
		this->b = x * y;
	}
	void multiply(double x, double y)
	{
		this->b = x * y;
	}
	void multiply(int x, double y, int z)
	{
		this->b = x * y * z;
	}

	void divide(int x, int y)
	{
		this->a = x / y;
	}
	void divide(int x, double y)
	{
		this->b = x / y;
	}
	void divide(double x, double y)
	{
		this->b = x / y;
	}
	void divide(int x, double y, int z)
	{
		this->b = x / y / z;
	}
};
void main()
{
	calculator c1;
	printf("\nAddition results=");
	int s = 20;
	int t = 10;
	double u = 15.5;
	double v = 10.5;
	c1.add(s,t);
	c1.display();

	c1.add(s,u);
	c1.display1();

	c1.add(u,v);
	c1.display1();

	c1.add(s,u,t);
	c1.display1();

	printf("\nSubstaction results=");
	c1.sub(s, t);
	c1.display();

	c1.sub(s, u);
	c1.display1();

	c1.sub(u, v);
	c1.display1();

	c1.sub(s, u, t);
	c1.display1();

	printf("\nMultiplication results=");
	c1.multiply(s, t);
	c1.display();

	c1.multiply(s, u);
	c1.display1();

	c1.multiply(u, v);
	c1.display1();

	c1.multiply(s, u, t);
	c1.display1();

	printf("\nDivision results=");
	c1.divide(s, t);
	c1.display();

	c1.divide(s, u);
	c1.display1();

	c1.divide(u, v);
	c1.display1();

	c1.divide(s, u, t);
	c1.display1();
}