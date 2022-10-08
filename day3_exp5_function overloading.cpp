#include<iostream>
using namespace std;
class printnumber
{
	public:
		void printn(int a)
		{
			cout<<a<<endl;
		}
		void printn(float a)
		{
			cout<<a<<endl;
		}
		void printn(double a)
		{
			cout<<a<<endl;
		}
	
};
int main()
{
	printnumber p1;
	p1.printn(15);
	p1.printn(1.223);
	p1.printn(1.2223335566);
	return 0;
}
