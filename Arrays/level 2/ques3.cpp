#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,sum;
	cin>>n>>sum;
	int a[n];
	int count=0;

	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
	    for(int j=i+1;j<n;j++)
	    {
	        if(a[i]+a[j]==sum)
	        {
	            count++;
	        }
	    }
	}
	cout<<"Number of pairs: "<<count<<"\n";
	if(count==0)
	{
	    cout<<"0 pairs";
	}
	return 0;
}
