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
	virtual double calArea()
	{
		return area;
	}
	virtual void draw()
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
	rectangle(double l, double b)
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
		cout << "Rectangle is Drawn with length=" << this->length << " & breadth=" << this->breadth;
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
	shape*sp;
	
	sp = new shape();
	sp->draw();
	cout << "\nCalculated Area=" << sp->calArea();
	cout << "\n\n";

	sp = new circle(100);
	sp->draw();
	cout << "\nCalculated Area=" << sp->calArea();
	cout << "\n\n";

	sp = new rectangle(4, 5);
	sp->draw();
	cout << "\nCalculated Area=" << sp->calArea();
	cout << "\n\n";

	sp = new square(5);
	sp->draw();
	cout << "\nCalculated Area=" << sp->calArea();
	cout << "\n\n";
}