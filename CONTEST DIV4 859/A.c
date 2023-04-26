//HOUSSAINE BENDHIEB
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

      ll n,k,res;
      cin>>n>>k>>res;
       if(n+k==res)
           cout<<"+"<<endl;
       else
           cout<<"-"<<endl;
    }
    return 0;



}
