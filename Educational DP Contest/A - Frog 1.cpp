#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007
#define pb push_back
#define nl cout<<"\n"
#define db(x) cout<<x<<" "
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define fk(a,b) for(int k=a;k<b;k++)
#define F first
#define S second
#define UM unordered_map<int,int>
#define MP map<int,int>
#define mxsize (int)1e6
void fun(){
    int n;
    cin>>n;
    int h[n];
    fi(0,n) cin>>h[i];
    int dp[2];
    dp[0]=0;
    dp[1]=abs(h[1]-h[0]);
    fi(2,n){
        int temp=dp[1];
        dp[1]=min(dp[0]+abs(h[i]-h[i-2]),dp[1]+abs(h[i]-h[i-1]));
        dp[0]=temp;
    }
    cout<<dp[1]<<"\n";
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
