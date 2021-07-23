#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x;
    int max=0;
    cin>>n>>m;
    
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<m;j++)
        {
            int a;
            cin>>a;
            if(a==1)
            {
                count++;
            }
        }
        if(count>max)
        {
            x=i;
        }
    }
    cout<<x<<"\n";
    return 0;
}
