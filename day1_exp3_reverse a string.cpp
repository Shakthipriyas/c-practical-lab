#include <iostream>
#include <string.h>
int main()
{
  	char str[100], revstr[100];
  	int i, j, len;
  	cout<<"\n please enter any string :";
  	cin>>str;
  	j = 0;
  	len = strlen(str);
   	for (i = len - 1; i >= 0; i--)
  	{
  		revstr[j++] = str[i];
  	}
  	revstr[i] = '\0';
  	printf("\n string after reversing = %s", revstr);
  	return 0;
} 


