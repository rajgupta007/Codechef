#include <bits/stdc++.h>
#define ll long long int
#define nline "\n"

using namespace std;

int main() {
	ll tc;
	cin>>tc;
	while(tc--)
	{
	      ll k;
	      cin>>k;
	      if(k%2==0)
	      {
	            int t=k/2;
	            cout<<(t*3)-t<<nline;
	      }
	      else
	      {
	            int t=k/2;
	            cout<<((k-t)*3)-t<<nline;
	      }
	}
	return 0;
}
