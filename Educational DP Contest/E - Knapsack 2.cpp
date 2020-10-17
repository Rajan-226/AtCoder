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
#define mxsize (int)1e5
ll fastexp(ll a,ll n,ll nod=LLONG_MAX){
    ll ans=1;
    while(n){
        if(n&1)
            ans=(ans*a)%nod;
        a=(a*a)%nod;
        n>>=1;
    }
    return ans;
}
vector<ll> w(101,0),v(101,0);
int n,capacity;
int knap3(){
	vector<ll> dp(mxsize+5,INT_MAX);
    dp[0]=0;
	fi(0,n){
		for(int j=mxsize;j>=v[i];j--){
            dp[j]=min(dp[j],w[i]+dp[j-v[i]]);
		}
	}
    for(int i=mxsize;i>=0;i--)  if(dp[i]<=capacity)    return i;
}   
void fun(){
	cin>>n>>capacity;
	fi(0,n)		cin>>w[i]>>v[i];
	cout<<knap3()<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout.precision(20);
    cout<<fixed;
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
