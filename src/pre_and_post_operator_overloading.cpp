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
	complex operator ++(int a)		//post
	{
		complex temp;
		temp.real = this->real ++;
		temp.imag = this->imag ++;
		return temp;
	}
	complex operator ++()		//pre
	{
		complex temp;
		temp.real = ++this->real;
		temp.imag = ++this->imag;
		return temp;
	}
};
void main()
{
	complex c1,c2;
	c1.setReal(10);
	c1.setImag(20);
	
	c1.display();

	c2 = c1++;					//pre k liye c2=++c1;
	c2.display();
	c1.display();
	printf("\n\n");
}
