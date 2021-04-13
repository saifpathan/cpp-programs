using namespace std;
#include<string.h>
#include<iostream>

class lathemachine
{
	int srno;
	char brand[20];
	char origin[20];
	int weight;
	int spindlespeed;
public:
	lathemachine()
	{
		this->srno = 0;
		strcpy(this->brand, "Not yet set");
		strcpy(this->origin, "Not yet set");
		this->weight = 0;
		this->spindlespeed = 0;
	}
	lathemachine(int srno, char* brand, char* origin, int weight, int spndlespeed)
	{
		this->srno = srno;
		strcpy(this->brand, brand);
		strcpy(this->origin, origin);
		this->weight = weight;
		this->spindlespeed = spindlespeed;
	}
	void setSrno(int srno)
	{
		this->srno = srno;
	}
	void setBrand(char* brand)
	{
		strcpy(this->brand, brand);
	}
	void setOrigin(char* origin)
	{
		strcpy(this->origin, origin);
	}
	void setWeight(int weight)
	{
		this->weight = weight;
	}
	void setSpindlespeed(int spindlespeed)
	{
		this->spindlespeed = spindlespeed;
	}
	int getSrno()
	{
		return this->srno;
	}
	char* getBrand()
	{
		return this->brand;
	}
	char* getOrigin()
	{
		return this->origin;
	}
	int getWeight()
	{
		return this->weight;
	}
	int getSpindlespeed()
	{
		return this->spindlespeed;
	}
	void display()

	{
		cout << "\n\t Sr no : " << getSrno();
		cout << "\n\t Brand Name : " << getBrand();
		cout << "\n\t Origin Name : " << getOrigin();
		cout << "\n\t Weight : " << getWeight();
		cout << "\n\t Spindlespeed : " << getSpindlespeed();
		cout << "\n\n";
	}
};
ostream& operator<<(ostream&, lathemachine&);
istream& operator>>(istream&, lathemachine&);
void main()
{
	lathemachine m1;
	cout << "\n\t Enter details of lathemachine 1";
	cin >> m1;
	cout << "\n\n";

	lathemachine m2(100, "Not yet set","india", 200, 10);
	cout << "\n\t Enter details of lathemachine 2";
	cin >> m2;
	cout << "\n\n";
	cout << "\n\t Lathe Machine 1 is";
	cout << m1;
	cout << "\n\n";
	cout << "\n\t Lathe Machine 2 is";
	cout << m2;
	cout << "\n\n";
}
ostream& operator<<(ostream& out, lathemachine& m1)
{
	out << "\n\t Sr no : " << m1.getSrno();
	out << "\n\t Brand Name : " << m1.getBrand();
	out << "\n\t Origin Name : " << m1.getOrigin();
	out << "\n\t Weight : " << m1.getWeight();
	out << "\n\t Spindlespeed : " << m1.getSpindlespeed();
	out << "\n\n";
	return out;
}
istream& operator>>(istream& in, lathemachine& m1)
{
	int srno;
	char brand[20];
	char origin[20];
	int weight;
	int spindlespeed;

	cout << "\n\t Enter Sr no : ";
	in >> srno;
	cout << "\t Enter Brand name : ";
	in >> brand;
	cout << "\t Enter Origin : ";
	in >> origin;
	cout << "\t Enter weight : ";
	in >> weight;
	cout << "\t Enter spindle speed : ";
	in >> spindlespeed;
	m1.setSrno(srno);
	m1.setBrand(brand);
	m1.setOrigin(origin);
	m1.setWeight(weight);
	m1.setSpindlespeed(spindlespeed);
	return in;
}
