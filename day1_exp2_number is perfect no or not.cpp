#include <iostream>
using namespace std;
class perfect
{
	public:
		void p1()
		{
		
           int n,i,sum = 0;
           cout<<"enter a number:";
           cin>>n;
           for(int i = 1; i < n; i++)
		   {
                 if(n % i == 0)
                 sum = sum + i;
            }
    if(sum == n)
        cout << n << " is a perfect number";
    else
        cout << n << " is not a perfect number";
    }
};
int main()
{
	perfect p;
    p.p1();
    return 0;
}

