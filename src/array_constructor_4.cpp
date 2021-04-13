#include<stdio.h>
class complex
{
	int real;
	int imag;
public:
	complex()//default constructor
	{
		printf("\nDefault constructor=");
		this->real = 0;
		this->imag = 0;
	}
	complex(int a, int b)//paramaterised constructor
	{
		printf("\nParamaterised constructor=");
		this->real = a;
		this->imag = b;
	}
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
void main()
{
	complex arr[5];
	for (int i = 0; i < 5; i++)
	{
		arr[i].display();
	}
	arr[0].setReal(10);
	arr[0].setImag(20);
	arr[0].display();


}