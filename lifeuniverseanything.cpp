
#include<conio.h>

#include <iostream>
using namespace std;

int main() {
	
int t,num1,num2,r,s,z,rev,rev1,rev2;
cin>>z;
while(z--)
{
	cin>>num1>>num2;
		while(num1>0)
	{
		r=t%10;
		t=t/10;
		rev1=rev*10+r;
	}
	num1=rev1;
	cout<<num1;
		while(num2>0)
	{
		r=t%10;
		t=t/10;
		rev2=rev2*10+r;
	}
	num2=rev;
	cout<<num2;
	s=num1+num2;
	cout<<s;
	
		while(s>0)
	{
		r=t%10;
		t=t/10;
		rev=rev*10+r;
	}
	cout<<s;
	
}
getch();

	return 0;
}
