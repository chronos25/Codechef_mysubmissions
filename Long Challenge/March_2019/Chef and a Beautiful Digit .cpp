#include<bits/stdc++.h>
//#include<conio.h>
#define l unsigned long long
using namespace std;
/*
#define sz(a) a.size()
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define tri pair<int,pii>
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define mod (1000*1000*1000+7)
#define pqueue priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< int > >
#define flush fflush(stdout) 
#define lli long long int
#define pb push_back
#define pob pop_back
#define rep(i,a,b) for(lli i=a;i<b;i++)
#define repv(a,b) for(int i=a;i>=b;i--)
#define itr vector<lli> :: iterator
#define maximum(a,b,c)  max(a,max(b,c))
#define minimum(a,b,c) min(a,min(b,c))
#define tim clock_t
*/
void sortstring(string str,char d,l len);
main()
{
	l t;
	cin>>t;
	while(t--)
	{
		string num;
		char d;
		cin>>num>>d;

		l len=num.size();
		for(l i=0;i<len-1;i++)
		{	for (l j=i+1;j<len;j++)
			{/* code */
				if(num[i]>num[j])
				{
					num[i]=d;
				}
			}
		}
		sortstring(num,d,len);
	}
	//getch(); 
}

void sortstring(string str,char d,l len)
{
		sort(str.begin(),str.end());
		for (l i = 0; i < len;i++)
				{
					/* code */
					if(str[i]>d)
					{
						str[i]=d;
					}
				}	
	cout<<str<<endl;
}
