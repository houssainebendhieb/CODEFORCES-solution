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
int tab[26];
int tab2[26];ll n,k;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

        cin>>n>>k;
        string ch;cin>>ch;

        memset(tab,0,sizeof tab);
        memset(tab2,0,sizeof tab2);
        for(int i=0;i<n;i++)
        {
            if(ch[i]>='A'&& ch[i]<='Z')
                tab2[ch[i]-'A']++;
            else
                tab[ch[i]-'a']++;

        }
        ll res=0;
        for(int i=0;i<26;i++)
        {
            res+=min(tab[i],tab2[i]);
            tab[i]=abs(tab[i]-tab2[i]);

        }
        sort(tab,tab+26);
        int i=25;
        while(k && i>=0)
        {
            if(k>tab[i]/2)
                res+=tab[i]/2,k-=tab[i]/2;
            else
                res+=k,k=0;
            i--;
        }
        cout<<res<<endl;
    }

    return 0;
}
