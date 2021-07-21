#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    int xsum=-1;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
        if(xsum<sum)
        {
            xsum=sum;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    cout<<xsum;
    
    return 0;
}
