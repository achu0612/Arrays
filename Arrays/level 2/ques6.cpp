#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,q,r;
    cin>>p>>q>>r;
    map<int,int> m;
    
    for(int i=0;i<p;i++)
    {
        int a;
        cin>>a;
        m[a]++;
    }
     for(int i=0;i<q;i++)
    {
        int b;
        cin>>b;
        m[b]++;
    }
     for(int i=0;i<r;i++)
    {
        int c;
        cin>>c;
        m[c]++;
    }
    
    for(auto i:m)
    {
        if(i.second>2)
        {
            cout<<i.first<<"\n";
        }
    }
    return 0;
}
