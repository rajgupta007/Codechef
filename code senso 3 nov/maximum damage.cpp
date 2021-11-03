#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;

int main() {
	ll tc;
	cin>>tc;
	while(tc--)
	{
	      ll n;cin>>n;
	      ll arr[n]={};
	      for(int i=0;i<n;i++)
	      {
	            cin>>arr[i];
	      } 
	      cout<<(arr[0]&arr[1])<<" ";
	      for(ll j=1;j<n-1;j++)
	      {
	            cout<<max(arr[j]&arr[j-1],arr[j]&arr[j+1])<<" ";
	      }cout<<(arr[n-1]&arr[n-2])<<nl;
      }
	return 0;
}
