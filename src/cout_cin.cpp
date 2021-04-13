using namespace std;
#include<iostream>
class complex
{
	int real;
	int imag;
public:
	complex()//default constructor
	{
		cout<<"\nDefault constructor=";
		this->real = 0;
		this->imag = 0;
	}
	complex(int a, int b)//paramaterised constructor
	{
		cout<<"\nParamaterised constructor=";
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
		cout<<"\nThe given complex no. is="<<this->real<<"+"<<this->imag<<"i\n\n";
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