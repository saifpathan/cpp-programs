#include<stdio.h>
#include<string.h>
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
		this->srno = 100;
		strcpy(this->brand, "not given");
		strcpy(this->origin, "INDIA");
		this->weight = 3450;
		this->spindlespeed = 8;
	}
	lathemachine(int s, char* b, char* o, int w, int ss)
	{
		this->srno = s;
		strcpy(this->brand, b);
		strcpy(this->origin, o);
		this->weight = w;
		this->spindlespeed = ss;
	}
	void setSrno(int s)
	{
		this->srno = s;
	}
	void setBrand(char* b)
	{
		strcpy(this->brand, b);
	}
	void setOrigin(char* o)
	{
		strcpy(this->origin, o);
	}
	void setWeight(int w)
	{
		this->weight = w;
	}
	void setSpindlespeed(int ss)
	{
		this->spindlespeed = ss;
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
		printf("\nLathe Machine details=(using display())");
		printf("\nSr no. is=%d", this->srno);
		printf("\nBrand Name is=%s", this->brand);
		printf("\nCountry of Origin=%s", this->origin);
		printf("\nWeight(kg)=%d", this->weight);
		printf("\nSpindle speed=%d", this->spindlespeed);
		printf("\n\n");
	}
};

int main()
{
	lathemachine*ptr;
	ptr = new lathemachine();
	ptr->display();
	delete ptr;

	lathemachine*p1;
	p1 = new lathemachine(89756, "VOLTZ", "INDIA", 3400, 8);
	p1->display();
	delete p1;
	printf("\n\n");
}