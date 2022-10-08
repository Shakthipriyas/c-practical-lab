#include <iostream>
using namespace std;
int main()
{
   int  i,j,k,m,n,a;
   cout<<"Enter number of rows: ";
   cin>>n;
   m = n - 1;
   cout<<"\n";
   for  (i = 1; i <= n; i++)
   {
      for  (j = 1; j<= m; j++)
         cout<<" ";
      m--;
      for  (k=1; k<=2*i-1; k++)
         cout<<k;
      cout<<"\n";
   }

   m = 1;
   for  (i = 1; i<= n - 1; i++)
   {
      for  (j = 1; j <= m; j++)
         cout<<" ";
      m++;
      for  (k =1 ; k<=2*(n-i)-1;k++)
         cout<<k;
      cout<<"\n";
   }
   return 0;
}
