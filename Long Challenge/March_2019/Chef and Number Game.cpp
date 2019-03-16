#include<bits/stdc++.h>
//#include<conio.h>
#define l long long 
using namespace std;
int main()
{
	l t;
	cin>>t;
	while(t--)
	{
		l n;
		cin>>n;
		l a[n];
		int countnegative=0,countpositive=0;
		for(l i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<0)
			{
				countnegative+=1;
			}
			else
			{
				countpositive+=1;
			}
		}
		if(countnegative<countpositive && countnegative!=0)
		{
			cout<<countpositive<<" "<<countnegative<<endl;
		}
		else if(countpositive!=0 && countpositive<countnegative)
		{
			cout<<countnegative<<" "<<countpositive<<endl;
		}
		else if(countnegative<countpositive && countnegative==0)
		{
			cout<<countpositive<<" "<<countpositive<<endl;
		}
		else if(countpositive==0 && countpositive<countnegative)
		{
			cout<<countnegative<<" "<<countnegative<<endl;
		}
		else
		{
			cout<<countpositive<<" "<<countnegative<<endl;
		}
		
	}
	//getch();
	return(0);
}
