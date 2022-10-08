//Function - Pass By Reference                    //syntax of pointers
//void fn_name(int *var1,int *var2)
//{
   // Code                    
//}

//Main Code- Pass By Reference
//fn_name(&orginal_var1,&orginal_var2);

#include <iostream>
#include<conio.h>

using namespace std;

// Declare Area of Circle Function Using Pointer 

void area_of_circle(float *value, float *result) {
   *result = 3.14 * (*value) * (*value);
}

int main() {
   float radius, area;

   cout << "Pointer Example C++ Program : Area Of Circle Using Pointer and Functions\n";

   cout << "\nEnter the radius of Circle : ";
   cin>>radius;

   //area = 3.14 * radius * radius;
   area_of_circle(&radius, &area);

   cout << "\nArea of Circle : " << area;

   getch();
   return 0;
}
