#include<stdio.h>
struct complex
{
	int real;
	int imag;
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
	void display()
	{
		printf("\n %d + %d i\n", this->real, this->imag);
	}
	int operator ==(complex c2)
	{
		if (this->real == c2.real)
		{
			if (this->imag == c2.imag)
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
};
int operator ==(int, complex);
void main()
{
	complex c1;
	c1.setReal(10);
	c1.setImag(20);
	printf("\nValue of c1=");
	c1.display();

	complex c2;
	c2.setReal(5);
	c2.setImag(15);
	printf("\nValue of c2=");
	c2.display();

	if (c1 == c2)
	{
		printf("\nC1 is equals to C2\n\n");
	}
	else
	{
		printf("\nC1 is not equal to C2\n\n");
	}
}