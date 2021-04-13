using namespace std;
#include<iostream>

class complex
{
	int real;
	int imag;
public:
	complex();
	complex(int, int);
	void setReal(int);
	void setImag(int);
	int getReal();
	int getImag();
	complex operator+(complex c2);//member
	complex operator+(int);
	void display();
	friend complex operator+(int, complex);
};//complex ends here