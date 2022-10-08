#include<iostream>
using namespace std;
class add
{
	int a,b,c;
	public:
		void add1()
		{
			cout<<"Enter the value of a= ";
			cin>>a;
			cout<<"Enter the value of b= ";
			cin>>b;
			c=a+b;
			cout<<"The sum= "<<c<<"\n";
		}
};
class mul
{
	int e,f,g;
	public:
		void mul1()
		{
			cout<<"Enter the value of e= ";
			cin>>e;
			cout<<"Enter the value of f= ";
			cin>>f;
			g=e*f;
			cout<<"The product= "<<g;
		}
};
class both : public add,public mul
{
	public:
		void both1()
		{
			add1();
			mul1();
		}
};
main()
{
	both b;
	b.both1();
}

