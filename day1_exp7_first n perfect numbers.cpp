#include <iostream>
#include <math.h>
class fact
{
	public:
		void f1(long long int n)
		{
		long long int dsum = 0;	
	    long long int i;
		for (i = 1; i <= sqrt(n); ++i)
	 {
		if (n % i == 0) 
		{
			if (i == n / i)
			 {
				dsum += i;
			}
			else 
			{
				dsum += i;
				dsum += n / i;
			}	}
	}
	dsum = dsum - n;
	if (dsum == n) 
	return 1;
	else		
return 0;	
		}
	public:
	void f2(long long int n)
	{
		int i,n;
	if (n == 1)
		return 0;
	for (int i = 2; i <= sqrt(n); ++i)
	 {
		if (n % i == 0)
			return 0;
	}
	return 1;
}
};

int main() 
{
	fact obj;
	obj.f1();
	obj.f2();
	long long int n, i, temp;
	printf("enter n: ");
	scanf("%d", &n);
	i = 1;
	while (n > 0) {
		if (isprime(i) == 1) {
			temp = pow(2, i - 1) * (pow(2, i) - 1);
			if (isperfect(temp) == 1) {
				printf("%d ", temp);
				n = n - 1;
			}
		}
		i = i + 1;
	}
	printf("\n");
	return 0;
} 

