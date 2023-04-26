#include<bits/stdc++.h>
//Every  problem is a gift without them we  would not grow
//A person who never made a mistake never tried anything new
using namespace std;
typedef long long ll;






int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        ll n,a=0,b=0;
       cin>>n;
       for(int i=0;i<n;i++)
       {
           ll c;cin>>c;
           if(c%2==0)
               a+=c;
           else
               b+=c;
       }
       if(a>b)
           cout<<"YES"<<endl;
       else
           cout<<"NO"<<endl;

    }
    return 0;



}
