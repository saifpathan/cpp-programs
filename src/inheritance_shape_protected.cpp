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
	int radius;
public:
	circle()
	{
		this->radius = 10;
	}
	circle(int r)
	{
		this->radius = r;
	}
	int getRadius()
	{
		return this->radius;
	}
	void setRadius(int r)
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
		cout << "Circle is Drawn with radius" << this->radius;
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

}