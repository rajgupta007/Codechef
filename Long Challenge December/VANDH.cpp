#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
#define loop(n) for(int ii = 0 ; ii <  n ; ii++)

using namespace std;
int main() {
	ll tc;
	cin >> tc;
	while( tc--)
	{
	  ll n , m ;
 	  cin >> n >> m;
	  if(n==m)
	  {
	        cout << (n+1)*2 << nl;
	        loop(n+1)
	        {
	              cout << "01" ;
	        }cout<<nl;
	  }
	  else if ( abs(n-m) == 1)
	  {
	        
	        if(n>m){
	              cout<<(n*2)+1 << nl;
	        loop(n)
	        {
	              cout << "01" ;
	        }cout<<"0"<<nl;
	        }
	        else {
	              cout << (m*2)+1 << nl;
	              loop(m)
	        {
	              cout << "10" ;
	        }cout << "1" << nl;}
	  }
	  else
	  {
	      string hill = "010" , valley = "101"  ;
	      if(n > m)
	      {
	            cout << (((min(n,m)) * 2) + (abs(n-m)*3)) << nl;
	            loop(min(n,m))
	            {
	                  cout << "01";
	            }
	            loop(abs(n-m))
	            {
	                  cout<<hill;
	            }cout<<nl;
	      }
	      else 
	      {
	            cout << (((min(n,m)) * 2) + (abs(n-m)*3)) << nl;
	            loop(min(n,m))
	            {
	                  cout << "10" ;
	            }
	            loop(abs(n-m))
	            {
	                  cout << valley;
	            }cout << nl;
	      }
	  }
	}
	return 0;
}
