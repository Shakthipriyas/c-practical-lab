#include<iostream>
using namespace std;
int main()
{
int i,j,m,n;
cout<<"enter lower limit :";
cin>>m;
cout<<"enter upper limit :";
cin>>n;
for(i=m;i<=n;i++)
{
for(j=2;j<i;j++)
{
if(i%j==0)
{
cout<<"\n"<<i;
break;
}
}
}
return 0;
} 

