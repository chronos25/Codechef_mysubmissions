#include<bits/stdc++.h>
#define ll long double
#define li long long int
//using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        li n,a,b;
        ll ca,cb;
        ca=0;cb=0;
        std::cin>>n>>a>>b;
        li x[n];
        for(int i=0;i<n;i++)
        {scanf("%lli",&x[i]);}
        for(li i=0;i<n;i++)
        {   //std::cout<<x[i]<<"\n";
            if(x[i]==a)
                {ca+=1;
                    if(x[i]==b)
                        cb+=1;
                    }
            else if(x[i]==b)
                {cb+=1;}
        }
      //std::cout<<ca/n<<" "<<cb/n<<" "<<n<<"\n";
        float d=((ca/n)*(cb/n));
        //std::cout<<d<<"\n";
        printf("%.10f\n",d);
    }
}
