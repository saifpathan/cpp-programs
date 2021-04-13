using namespace std;
#include<iostream>
class defense
{
	char nameofdept[20];
	char country[20];
	int totalofficers;
public:
	void setNameofdept(char* nm)
	{
		strcpy(this->nameofdept, nm);
	}
	char* getNameofdept()
	{
		return this->nameofdept;
	}
	void setCountry(char* c)
	{
		strcpy(this->country, c);
	}
	char* getCountry()
	{
		return this->country;
	}
	void setTotalofficers(int t)
	{
		this->totalofficers = t;
	}
	int getTotalofficers()
	{
		return this->totalofficers;
	}
	defense()
	{
		cout << "\nDefense Default Constructor is called";
		strcpy(this->nameofdept, "Not given");
		strcpy(this->country, "Not given");
		this->totalofficers = 10000;
	}
	defense(char*nm, char* c, int t)
	{
		cout << "\nDefense Paramaterised Constructor is called";
		strcpy(this->nameofdept, nm);
		strcpy(this->country, c);
		this->totalofficers = t;
	}
	void display()
	{
		cout << "\nName of Department is=" << this->nameofdept;
		cout << "\nCountry Name=" << this->country;
		cout << "\nTotal no. of Officers is=" << this->totalofficers;
	}
};
class army :public defense
{
	char nameofserviceman[20];
	int serviceno;
public:
	void setNameofserviceman(char* sm)
	{
		strcpy(this->nameofserviceman, sm);
	}
	char* getNameofserviceman()
	{
		return this->nameofserviceman;
	}
	int getServiceno()
	{
		return this->serviceno;
	}
	void setServiceno(int sn)
	{
		this->serviceno = sn;
	}
	army() :defense()//parameter initialisation list
	{
		cout << "\nArmy Default Constructor is called";
		strcpy(this->nameofserviceman, "Not given");
		this->serviceno = 145;
	}
	army(char*nm, char* c, int t, char*sm, int sn) :defense(nm, c, t)//parameter initialisation list
	{
		cout << "\nArmy Paramaterised Constructor is called";
		strcpy(this->nameofserviceman, sm);
		this->serviceno = sn;
	}
	void display()
	{
		defense::display();
		cout << "\nName of Serviceman is=" << this->nameofserviceman;
		cout << "\nService No.=" << this->serviceno;
	}
};

class airforce :public defense
{
	char flightname[20];
	int flightno;
public:
	void setFlightname(char* fn)
	{
		strcpy(this->flightname, fn);
	}
	char* getFlightname()
	{
		return this->flightname;
	}
	int getFlightno()
	{
		return this->flightno;
	}
	void setFlightno(int n)
	{
		this->flightno = n;
	}
	airforce() :defense()//parameter initialisation list
	{
		cout << "\nAirforce Constructor is called";
		strcpy(this->flightname, "not given");
		this->flightno = 4444;
	}
	airforce(char*nm, char* c, int t, char*fn, int n) :defense(nm, c, t)//parameter initialisation list
	{
		cout << "\nAirforce Paramaterised Constructor is called";
		strcpy(this->flightname, fn);
		this->flightno = n;
	}
	void display()
	{
		defense::display();
		cout << "\nFlight name=" << this->flightname;
		cout << "\nFlight no.=" << this->flightno;
	}
};

class navy :public defense
{
	char shipname[20];
	int shipno;
public:
	void setShipname(char* sna)
	{
		strcpy(this->shipname, sna);
	}
	char* getShipname()
	{
		return this->shipname;
	}
	int getShipno()
	{
		return this->shipno;
	}
	void setShipno(int sno)
	{
		this->shipno = sno;
	}
	navy() :defense()//parameter initialisation list
	{
		cout << "\nNavy Constructor is called";
		strcpy(this->shipname, "not given");
		this->shipno = 7777;
	}
	navy(char*nm, char* c, int t, char*sna, int sno) :defense(nm, c, t)//parameter initialisation list
	{
		cout << "\nNavy Paramaterised Constructor is called";
		strcpy(this->shipname, sna);
		this->shipno = sno;
	}
	void display()
	{
		defense::display();
		cout << "\nShip name=" << this->shipname;
		cout << "\nShip no.=" << this->shipno;
	}
};
void main()
{
	army a1;
	a1.display();
	cout << "\n\n";

	army a2("Army","INDIA",10000,"Sukhwinder Singh",45879);
	a2.display();
	cout << "\n\n";

	airforce l1;
	l1.display();
	cout << "\n\n";

	airforce l2("Airforce","INDIA",15000,"TEJAS",8527);
	l2.display();
	cout << "\n\n";

	navy t1;
	t1.display();
	cout << "\n\n";

	navy t2("Navy","INDIA",12500,"INS TALWAR",9638);
	t2.display();
	cout << "\n\n";
}