#include<bits/stdc++.h>
//Every  problem is a gift without them we  would not grow
//A person who never made a mistake never tried anything new
using namespace std;
typedef long long ll;





bool compare(pair<ll,ll>a,pair<ll,ll>b)
{
    if(a.first==b.first)
        return a.second<b.second;
    return a.first<b.first;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        vector<ll>listes(n);
        vector<ll>tmp(n);
        for(int i=0;i<n;i++)
            cin>>listes[i];
        tmp[0]=listes[0];
        for(int i=1;i<n;i++)
        {
            tmp[i]=listes[i]+tmp[i-1];
        }
        for(int i=0;i<q;i++)
        {
            ll a,b,c;
            cin>>a>>b>>c;
            a--;
            b--;
            ll aux=(b-a+1)*c;
            if(a==0 )
            {
                ll k=tmp[n-1]+aux-tmp[b];
                if((tmp[n-1]+aux-tmp[b])%2!=0)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else
            {

                ll k=(tmp[n-1]+aux-(tmp[b]-tmp[a-1]));
                if((tmp[n-1]+aux-(tmp[b]-tmp[a-1]))%2!=0)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }



        }
    }
    return 0;



}
