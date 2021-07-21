#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[n];
  int flag=0;
  int sum=0;

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[i]==0)
    {
      flag=1;
    }
  }
  
  for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++)
    {
      sum+=a[j];
      if(sum==0)
      {
        flag=1;
        break;
      }
    }
    sum=0;
  }
  if(flag==1){
    cout<<"true"<<endl;
  }
  else{
    cout<<"false"<<endl;
  }
  return 0;
}
