#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	map<int,int> m;
	int a;
	int count=0;

	for(int i=0;i<n;i++)
	{
	    cin>>a;
	    m[a]++;
	}
	
	for(auto i:m)
	{
	    if(i.second>(n/2))
	    {
	        cout<<i.first<<"\n";
	        count+=1;
	    }
	}
	if(count==0)
	{
	    cout<<"No majority element";
	}
	
	return 0;
}
