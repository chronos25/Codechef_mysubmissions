#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int t;
	int a,b,c,d;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c>>d;
		if((b==c) && (b==d) && (a!=b))
		cout<<"NO"<<endl;
		else if((a==b)&&(a==c)&&(a!=d))
		cout<<"NO"<<endl;
		else if(a==b && a==d && a!=c)
		cout<<"NO"<<endl;
		else if(a==c && a==d && a!=b)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
		
		
	}
	getch();
	return(0);
}
