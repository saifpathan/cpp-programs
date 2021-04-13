#include<stdio.h>
#include<string.h>
struct lathemachine
{
	int srno;
	char brand[20];
	char origin[20];
	int weight;
	int spindlespeed;

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
	lathemachine l1;
	l1.setSrno(89756);
	l1.setBrand("VOLTZ");
	l1.setOrigin("INDIA");
	l1.setWeight(3400);
	l1.setSpindlespeed(8);

	l1.display();

	printf("\n\nLathe Machine details=(using get())");
	printf("\nSr no. is=%d", l1.getSrno());
	printf("\nBrand Name is=%s", l1.getBrand());
	printf("\nCountry of Origin=%s", l1.getOrigin());
	printf("\nWeight(kg)=%d", l1.getWeight());
	printf("\nSpindle speed=%d", l1.getSpindlespeed());

	printf("\n\n");
}