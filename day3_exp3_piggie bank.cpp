#include<iostream>
using namespace std;
class add_amount
{
	int amount;
	public:
		add_amount()
		{
			amount=50;
		}
		add_amount(int a)
		{
			amount=50;
			amount=amount+a;
		}
		void print_amount()
		{
			cout<<amount<<endl;
		}
};
int main()
{
	add_amount a1;
	add_amount a2(20);
	a1.print_amount();
	a2.print_amount();
	return 0;
}
