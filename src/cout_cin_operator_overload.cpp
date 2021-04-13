using namespace std;
#include<string.h>
#include<iostream>

class Complex
{
	int real;
	int imag;
public:
	void setReal(int r)
	{
		this->real = r;
	}
	int getReal()
	{
		return this->real;
	}
	void setImag(int i)
	{
		this->imag = i;
	}
	int getImag()
	{
		return this->imag;
	}
};
ostream& operator<<(ostream&, Complex&);
istream& operator>>(istream&, Complex&);
void main()
{
	Complex c1;
	cout << "\n\tThe given complex no. is=";
	cin >> c1;
	cout << c1;
	cout << "\n\n";
}
ostream& operator<<(ostream& out, Complex& c1)
{
	out << "\n\t Complex no. is=" << c1.getReal() << "+" << c1.getImag() << "i" ;
	out << "\n\n";
	return out;
}
istream& operator>>(istream& in, Complex& c1)
{
	int real;
	int imag;
	cout << "\n\t Enter real part : ";
	in >> real;
	cout << "\t Enter imaginary part: ";
	in >> imag;
	c1.setReal(real);
	c1.setImag(imag);
	return in;
}
