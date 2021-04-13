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
		printf("\nThe given complex no. is= %d+%di\n\n", this->real, this->imag);
	}
};
int main()
{
	complex c1;
	c1.setReal(5);
	c1.setImag(2);
	c1.display();
	
}