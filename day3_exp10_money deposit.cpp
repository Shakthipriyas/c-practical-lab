#include<iostream>
using namespace std;
class bank
{
	public:
		int gerbalance()
		{
			return 0;
		}
};
class banka : public bank
{
	int amount;
	public:
		banka(int a)
		{
			amount=a;
		}
		int getbalance()
		{
			return amount;
		}
};
class bankb : public bank
{
	int amount;
	public:
		bankb(int a)
		{
			amount=a;
		}
		int getbalance()
		{
			return amount;
		}
};
class bankc : public bank
{
	int amount;
	public:
		bankc(int a)
		{
			amount=a;
		}
		int getbalance()
		{
			return amount;
		}
};
int main()
{
	banka a(2000);
	bankb b(3000);
	bankc c(4000);
	cout<<a.getbalance() <<endl;
	cout<<b.getbalance()  <<endl;
	cout<<c.getbalance()  <<endl;
	return 0;
}
