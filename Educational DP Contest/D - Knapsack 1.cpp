#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define pb push_back
#define nl cout<<"\n"
#define db(x) cout<<x<<" "
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define fk(a,b) for(int k=a;k<b;k++)
#define F first
#define S second
template <typename T> istream &operator>>(istream &is, vector<T> &vec) { for (auto &v : vec) is >> v; return is; }
#define mxsize (int)1e6
ll fastexp(ll a,ll n,ll nod){
	if(nod==0)	nod=LLONG_MAX;
	ll ans=1;
	while(n){
		if(n&1)
			ans=(ans*a)%nod;
		a=(a*a)%nod;
		n>>=1;
	}
	return ans;
}
void fun(){
	int n,capacity;
	cin>>n>>capacity;
	ll w[n],v[n];
	fi(0,n){
		cin>>w[i]>>v[i];
	}
	vector<ll> dp(capacity+1,0);
	fi(1,n+1){
		for(int j=capacity;j>=w[i-1];j--){
			if(w[i-1]<=j)
				dp[j]=max(dp[j],v[i-1]+dp[j-w[i-1]]);
		}
	}
	cout<<dp[capacity]<<"\n";	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	#ifndef ONLINE_JUDGE
		freopen("/ATOM/input.txt", "r", stdin);
		freopen("/ATOM/output.txt", "w", stdout);
	#endif
	int t=1;
	// cin>>t;
	while(t--){
		fun();
	}
}
