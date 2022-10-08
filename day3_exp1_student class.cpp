#include<iostream>
#include<string>
using namespace std;
class student
{
	string name;
	public:
		student(string a)
	{
		name=a;
	}
	student()
	{
		name="unknown";
	}
	void print_name()
	{
		cout<<name<<endl;
	}
};
int main()
{
	student a1("vvvv");         //student a1("hell0")
	                            //student a2;
	a1.print_name();             //a1.print_name();
	return 0;                     //a2.print_name();
}
