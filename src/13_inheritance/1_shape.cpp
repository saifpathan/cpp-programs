using namespace std;
#include<iostream>
class shape
{
protected:
	double area;
public:
	shape()
	{
		area = 0;
	}
	double calArea()
	{
		return area;
	}
	void draw()
	{
		cout << "Shape is Drawn";
	}
};//shape ends here
class circle :public shape
{
	double radius;
public:
	circle()
	{
		this->radius = 10;
	}
	circle(double r)
	{
		this->radius = r;
	}
	double getRadius()
	{
		return this->radius;
	}
	void setRadius(double r)
	{
		this->radius = r;
	}
	double calArea()
	{
		this->area = 3.4*this->radius*this->radius;
		return this->area;
	}
	void draw()
	{
		cout << "Circle is Drawn with radius=" << this->radius;
	}
};
class rectangle :public shape
{
	double length;
	double breadth;
public:
	rectangle()
	{
		this->length = 10;
		this->breadth = 10;
	}
	rectangle(double l,double b)
	{
		this->length = l;
		this->breadth = b;
	}
	double getLength()
	{
		return this->length;
	}
	void setLength(double l)
	{
		this->length = l;
	}
	double getBreadth()
	{
		return this->breadth;
	}
	void setBreadth(double b)
	{
		this->breadth = b;
	}
	double calArea()
	{
		this->area = this->length*this->breadth;
		return this->area;
	}
	void draw()
	{
		cout << "Rectangle is Drawn with length=" << this->length<<" & breadth="<<this->breadth;
	}
};
class square :public shape
{
	double length;
public:
	square()
	{
		this->length = 10;
	}
	square(double l)
	{
		this->length = l;
	}
	double getLength()
	{
		return this->length;
	}
	void setLength(double l)
	{
		this->length = l;
	}
	double calArea()
	{
		this->area = this->length*this->length;
		return this->area;
	}
	void draw()
	{
		cout << "Square is Drawn with length=" << this->length;
	}
};

void main()
{
	circle c1;
	c1.draw();
	cout << "\nCalculated Area=" << c1.calArea();
	cout << "\n\n";

	circle c2(100);
	c2.draw();
	cout << "\nCalculated Area=" << c2.calArea();
	cout << "\n\n";

	rectangle r1;
	r1.draw();
	cout << "\nCalculated Area=" << r1.calArea();
	cout << "\n\n";

	rectangle r2(4, 5);
	r2.draw();
	cout << "\nCalculated Area=" << r2.calArea();
	cout << "\n\n";

	square s1;
	s1.draw();
	cout << "\nCalculated Area=" << s1.calArea();
	cout << "\n\n";

	square s2(5);
	s2.draw();
	cout << "\nCalculated Area=" << s2.calArea();
	cout << "\n\n";
}