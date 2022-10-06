#include<iostream>
using namespace std;
void factors(int num) {
   int i;
   for(i=1; i <= num; i++) {
      if (num % i == 0)
      cout << i << " ";
   }
}
int main()
 {
   int num,n;
   cout<<"enter the number:";
   cin>>num;
   cout << "The factors of " << num << " are : ";
   factors(num);
   return 0;
}
