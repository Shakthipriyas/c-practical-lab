#include<iostream>
using namespace std;
class palindrome
{
	public:
		int n,num,digit,rev=0;
		void number()
		{
			cout<<"enter a number:";
			cin>>num;
			n=num;
			while(num)
			{
				digit=num%10;
				rev=(rev*10)+digit;
				num=num/10;
			}
			cout<<"the reversed string is:"<<rev<<endl;
			if(n==rev)
			{
				cout<<"the number is palindrome";
			}
		    else
			{
				cout<<"the number is not a palindrome";
			}			
	    }
	    
};
int main()
{
	palindrome p;
	p.number();
	return 0;
}
