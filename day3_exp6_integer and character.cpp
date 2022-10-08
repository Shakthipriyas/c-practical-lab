#include<iostream>
using namespace std;
class print
{
 public:
  void output(int a, char b[20])
  {
   cout<<a<<endl;
   cout<<b<<endl;
  }
  void output(char b[20], int a)
  {

   cout<<b<<endl;
   cout<<a<<endl;
  }
};
int main()
{
 print obj;
 obj.output("bhavani", 10);
 obj.output(10, "bhavani");
}
