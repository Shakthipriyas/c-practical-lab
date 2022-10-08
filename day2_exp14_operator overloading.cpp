#include<iostream>
class counter
{
int count;
public:
counter()
{
count=0;
}
counter operator++(int)
{
count++;
}
int get_count()
{
return count;
}


counter operator--(int)
{
count--;
}
};
int main()
{
	
counter c1;
c1.get_count();
cout<<"Initial No Of People ";
c1++;
c1++;
c1++;
cout<<"Present No Of People "<<c1.get_count()<<endl;
c1--;
c1--;
cout<<"Present No Of People "<<c1.get_count()<<endl;
getch();
return 0;

}
