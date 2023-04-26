//HOUSSAINE BENDHIEB
#include<bits/stdc++.h>
//Every  problem is a gift without them we  would not grow
//A person who never made a mistake never tried anything new
using namespace std;
typedef long long ll;
ll min(ll a,ll b)
{
    if(a>b)
        return b;
    return a;
}
int main()
{
ll t;
cin>>t;
    while(t--)
    {
        ll n,tab[15000000],res=0;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>tab[i];
        priority_queue<ll>file;
        for(int i=0;i<n;i++)
        {
            if(tab[i]!=0)
                file.push(tab[i]);
            if(tab[i]==0)
            {
                if(!file.empty())
                    res+=file.top(),file.pop();
            }
        }
        cout<<res<<endl;
    }

    return 0;
}
