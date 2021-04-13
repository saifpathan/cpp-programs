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
};
int main()
{
	complex c1;
	c1.setReal(10);
	c1.setImag(20);
	printf("\nThe given complex no. is= %d+%di\n\n", c1.getReal(), c1.getImag());
}