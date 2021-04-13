#include<stdio.h>
class complex
{
	int real;
	int imag;
public:

	void setReal(int r)
	{
		this->real = r;
	}
	void setImag(int i)
	{
		this->imag = i;
	}
	int getReal()
	{
		return this->real;
	}
	int getImag()
	{
		return this->imag;
	}
	complex operator+(complex c2)//member
	{
		complex temp;
		temp.real = this->real + c2.real;
		temp.imag = this->imag + c2.imag;
		return temp;
	}
	complex operator+(int a)//member
	{
		complex temp;
		temp.real = this->real + a;
		temp.imag = this->imag + a;
		return temp;
	}
	void display()
	{
		printf("\n %d + %d i", this->real, this->imag);
	}
	friend complex operator+(int, complex);
};//complex ends here

void main()
{
	complex c1;
	c1.setReal(10);
	c1.setImag(20);
	c1.display();
}
complex operator+(int a, complex c2)
{
	complex temp;
	temp.real = c2.real + a;
	temp.imag = c2.imag + a;
	return temp;
}