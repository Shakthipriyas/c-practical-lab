#include<iostream>
using namespace std;
 
int isPrimeNumber(int num);
int main() {
   int i, j, rows;
   int counter = 2;
    
   cout<<"Enter the number of rows\n";
   cin>>rows;
     
   for (i = 1; i <= rows; i++) {
      for (j = 1; j <= i; j++) {

            counter++;
 }
        cout<<counter;
        counter++;
      }
      cout<<"\n";
   }
   return 0;
}
  
int isPrimeNumber(int num) {
   int i, isPrime = 1;
   for (i = 2; i <= (num/2); i++) {
      if (num % i == 0){
         isPrime = 0;
         break;
      }
   }
   if (isPrime==1 || num==2)
      return 1;
   else
      return 0;
}
