#include"complex.h"
complex::complex()
{
	this->real = this->imag = 0;
}
complex::complex(int real, int imag)
{
	this->real = real;
	this->imag = imag;
}
void complex::setImag(int i)
{
	this->imag = i;
}
int complex::getReal()
{
	return this->real;
}
int complex::getImag()
{
	return this->imag;
}
complex complex::operator+(complex c2)//member
{
	complex temp;
	temp.real = this->real + c2.real;
	temp.imag = this->imag + c2.imag;
	return temp;
}
complex complex::operator+(int a)//member
{
	complex temp;
	temp.real = this->real + a;
	temp.imag = this->imag + a;
	return temp;
}
void complex::display()
{
	cout << "\n" << this->real << "+" << this->imag << "i";
}
void complex::setReal(int r)
{
	this->real = r;
}
complex operator+(int a, complex c2)
{
	complex temp;
	temp.real = c2.real + a;
	temp.imag = c2.imag + a;
	return temp;
}