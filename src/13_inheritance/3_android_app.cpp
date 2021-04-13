using namespace std;
#include<iostream>
class androidapp
{
	char name[20];
	int size;
	int rating;
public:
	void setName(char* nm)
	{
		strcpy(this->name, nm);
	}
	char* getName()
	{
		return this->name;
	}
	void setSize(int s)
	{
		this->size = s;
	}
	int getSize()
	{
		return this->size;
	}
	void setRating(int r)
	{
		this->rating = r;
	}
	int getRating()
	{
		return this->rating;
	}
	androidapp()
	{
		cout << "\nAndroid app Default Constructor is called";
		strcpy(this->name, "Not given");
		this->size = 100;
		this->rating = 4;
	}
	androidapp(char*nm, int s, int r)
	{
		cout << "\nAndroid app Paramaterised Constructor is called";
		strcpy(this->name, nm);
		this->size = s;
		this->rating = r;
	}
	void display()
	{
		cout << "\nName is=" << this->name;
		cout << "\nSize of app is(in mb)=" << this->size;
		cout << "\nRating of app is=" << this->rating;
	}
};
class banking :public androidapp
{
	int accountno;
	int balance;
public:
	int getAccountno()
	{
		return this->accountno;
	}
	void setAccountno(int ac)
	{
		this->accountno = ac;
	}
	void setbalance(int b)
	{
		this->balance = b;
	}
	int getbalance()
	{
		return this->balance;
	}
	
	banking() :androidapp()//parameter initialisation list
	{
		cout << "\nBanking App Default Constructor is called";
		this->accountno = 65222;
		this->balance = 20000;
	}
	banking(char*nm, int s, int r, int ac, int b) :androidapp(nm, s, r)//parameter initialisation list
	{
		cout << "\nBanking App Paramaterised Constructor is called";
		this->accountno = ac;
		this->balance = b;
	}
	void display()
	{
		androidapp::display();
		cout << "\nAccount no. is=" << this->accountno;
		cout << "\nBalance Amount is=" << this->balance;
	}
};

struct socialmedia :public androidapp
{
	int no_of_comments;
	int no_of_likes;
	int no_of_share;
public:
	socialmedia() :androidapp()//parameter initialisation list
	{
		cout << "\nSocialMedia app Constructor is called";
		this->no_of_likes = 158;
		this->no_of_comments = 110;
		this->no_of_share = 20;
	}
	socialmedia(char*nm, int s, int r, int noc, int nol, int nos) :androidapp(nm, s, r)//parameter initialisation list
	{
		cout << "\nSocialMedia app Paramaterised Constructor is called";
		this->no_of_likes = nol;
		this->no_of_comments = noc;
		this->no_of_share = nos;
	}
	int getNooflikes()
	{
		return this->no_of_likes;
	}
	void setNooflikes(int nol)
	{
		this->no_of_likes = nol;
	}
	void setNoofcomments(int noc)
	{
		this->no_of_comments = noc;
	}
	int getNoofcomments()
	{
		return this->no_of_comments;
	}
	void setNoofshares(int nos)
	{
		this->no_of_share = nos;
	}
	int getNoofshares()
	{
		return this->no_of_share;
	}
	void display()
	{
		androidapp::display();
		cout << "\nNo. of likes are=" << this->no_of_likes;
		cout << "\nNo. of comments are=" << this->no_of_comments;
		cout << "\nNo. of shares are=" << this->no_of_share;
	}
};

void main()
{
	banking b1;
	b1.display();
	cout << "\n\n";

	banking b2("Yono",500,5,45678,25000);
	b2.display();
	cout << "\n\n";

	socialmedia s1;
	s1.display();
	cout << "\n\n";

	socialmedia s2("Facebook",800,5,500,450,50);
	s2.display();
	cout << "\n\n";
}