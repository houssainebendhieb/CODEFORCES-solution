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
        ll n;
      cin>>n;
        cin.ignore();
        string ch;
        cin>>ch;
        bool test=true;
        vector<int>res(26);
        for(int i=0;i<26;i++)
            res[i]=-1;
       // map<char,int>maps;
        for(int i=0;i<n;i++)
        {
            int k=(k+1)%2;
            if(res[ch[i]-'a']==-1)
                res[ch[i]-'a']=k;
            else continue;
        }
        for(int i=1;i<n-1;i++)
        {
            if(res[ch[i]-'a']==res[ch[i-1]-'a'] || res[ch[i]-'a']==res[ch[i+1]-'a'])
            {
                test=false;break;
            }
        }
        if(n==2)
        {
            if(ch[0]==ch[1])
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
       else  if(test)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;



}
