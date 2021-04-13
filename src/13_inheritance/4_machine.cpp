using namespace std;
#include<iostream>
class machine
{
	char name[20];
	int price;
	int productid;
public:
	void setName(char* nm)
	{
		strcpy(this->name, nm);
	}
	char* getName()
	{
		return this->name;
	}
	void setPrice(int p)
	{
		this->price = p;
	}
	int getPrice()
	{
		return this->price;
	}
	void setProductid(int pi)
	{
		this->productid = pi;
	}
	int getProductid()
	{
		return this->productid;
	}
	machine()
	{
		cout << "\nMachine Default Constructor is called";
		strcpy(this->name, "Not given");
		this->price = 10000;
		this->productid = 100;
	}
	machine(char*nm, int p, int pi)
	{
		cout << "\nMachine Paramaterised Constructor is called";
		strcpy(this->name, nm);
		this->price = p;
		this->productid = pi;
	}
	void display()
	{
		cout << "\nName is=" << this->name;
		cout << "\nPrice is=" << this->price;
		cout << "\nProduct I.D. is=" << this->productid;
	}
};
class fan :public machine
{
	int no_of_blades;
	int speed;
public:
	int getNoofblades()
	{
		return this->no_of_blades;
	}
	void setNoofblades(int nob)
	{
		this->no_of_blades = nob;
	}
	void setSpeed(int s)
	{
		this->speed = s;
	}
	int getSpeed()
	{
		return this->speed;
	}
	fan() :machine()//parameter initialisation list
	{
		cout << "\nFan Default Constructor is called";
		this->no_of_blades = 3;
		this->speed = 5;
	}
	fan(char*nm, int p, int pi, int nob, int s) :machine(nm, p, pi)//parameter initialisation list
	{
		cout << "\nFan Paramaterised Constructor is called";
		this->no_of_blades = nob;
		this->speed = s;
	}
	void display()
	{
		machine::display();
		cout << "\nNo.of blades is=" << this->no_of_blades;
		cout << "\nSpeed is=" << this->speed;
	}
};

class laptop :public machine
{
	char software[20];
	int ram;
	int size;
public:
	void setSoftware(char* sw)
	{
		strcpy(this->software, sw);
	}
	char* getSoftware()
	{
		return this->software;
	}
	int getRam()
	{
		return this->ram;
	}
	void setRam(int r)
	{
		this->ram = r;
	}
	void setSize(int sz)
	{
		this->size = sz;
	}
	int getSize()
	{
		return this->size;
	}
	laptop() :machine()//parameter initialisation list
	{
		cout << "\nLaptop Constructor is called";
		strcpy(this->software, "not given");
		this->ram = 4;
		this->size = 500;
	}
	laptop(char*nm, int p, int pi, char*sw, int r, int sz) :machine(nm, p, pi)//parameter initialisation list
	{
		cout << "\nLaptop Paramaterised Constructor is called";
		strcpy(this->software, sw);
		this->ram = r;
		this->size = sz;
	}
	void display()
	{
		machine::display();
		cout << "\nSoftware=" << this->software;
		cout << "\nRAM=" << this->ram;
		cout << "\nStorage Size=" << this->size;
	}
};

class tv :public machine
{
	char sound[20];
	char pictureQuality[20];
public:
	tv() :machine()//parameter initialisation list
	{
		cout << "\nT.V. Default Constructor is called";
		strcpy(this->sound, "not given"); 
		strcpy(this->pictureQuality, "not given");
	}
	tv(char*nm, int p, int pi, char*sn, char* pq) :machine(nm, p, pi)//parameter initialisation list
	{
		cout << "\nT.V. Paramaterised Constructor is called";
		strcpy(this->sound, sn);
		strcpy(this->pictureQuality, pq);
	}
	void setSound(char* sn)
	{
		strcpy(this->sound, sn);
	}
	char* getSound()
	{
		return this->sound;
	}
	void setPicturequality(char* pq)
	{
		strcpy(this->pictureQuality, pq);
	}
	char* getPicturequality()
	{
		return this->pictureQuality;
	}
	void display()
	{
		machine::display();
		cout << "\nSound=" << this->sound;
		cout << "\nPicture Quality=" << this->pictureQuality;
	}
};
void main()
{
	fan f1;
	f1.display();
	cout << "\n\n";

	fan f2("Usha",2000,7852,3,7);
	f2.display();
	cout << "\n\n";

	laptop l1;
	l1.display();
	cout << "\n\n";

	laptop l2("Lenovo",30000,8051,"Windows",4,1024);
	l2.display();
	cout << "\n\n";

	tv t1;
	t1.display();
	cout << "\n\n";

	tv t2("Samsung",50000,55,"Dolby","UHD");
	t2.display();
	cout << "\n\n";
}