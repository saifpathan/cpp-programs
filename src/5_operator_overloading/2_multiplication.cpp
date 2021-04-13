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
	complex operator *(complex c2)
	{
		complex temp;
		temp.real = this->real * c2.real;
		temp.imag = this->imag * c2.imag;
		return temp;
	}
	complex operator *(int a)
	{
		complex temp;
		temp.real = this->real * a;
		temp.imag = this->imag * a;
		return temp;
	}
};
complex operator *(int, complex);
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

	complex c3, c4, c5;
	c3 = c1 * c2;
	//c3=c1.operator*(c2)
	printf("\nValue of c3=");
	c3.display();

	c4 = c1 * 10;
	//c4=c1.operator*(10)
	printf("\nValue of c4=");
	c4.display();

	c5 = 10 * c1;
	//c5=operator*(10,c1)
	printf("\nValue of c5=");
	c5.display();

}
complex operator *(int a, complex c1)
{
	complex temp;
	temp.setReal(a * c1.getReal());
	temp.setImag(a * c1.getImag());
	return temp;
}