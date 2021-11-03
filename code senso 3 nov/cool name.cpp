#include <bits/stdc++.h>
#define ll long long int
#define nline "\n"

using namespace std;

int main() {
	ll tc;
	cin>>tc;
	while(tc--)
	{
	   string s;
	   cin>>s;
	   int sz=s.size();
	   sort(s.begin(),s.end());
	   ll ans=0;
	   for(int i=0;i<sz;i++)
	   {
	         ans=ans+(i+1)*((s[i]-'a')+1);
	   }
	   cout<<ans<<nline;
	}
	return 0;
}
