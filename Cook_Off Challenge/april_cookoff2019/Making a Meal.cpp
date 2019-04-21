#include <iostream>
 
#define l long long int
using namespace std;

int occur(string s,char c)
{
    l len=s.length();
    int count=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]==c)
        {
            count+=1;
        }
    }
    return count;
}
  
int main() {
    l t;
    cin>>t;
    while(t--)
    {
        l n;  
        cin>>n;
        string s,s1="";
        for(int i=0;i<n;i++)
        {
            cin>>s;
            s1+=s;
        }
        //cout<<s1<<endl;
        int  c=occur(s1,'c');
        int  o=occur(s1,'o');
        int  d=occur(s1,'d');
        int  e=occur(s1,'e');
        int  h=occur(s1,'h');
        int  f=occur(s1,'f');
        
        int ans = min(c/2, d);
        ans = min(ans, e/2);
        ans = min(ans, f);
        ans = min(ans, h);
        ans = min(ans, o);
        cout << ans << endl;
        
    }
     
	return 0;
}
