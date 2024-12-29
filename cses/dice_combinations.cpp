#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define V vector
#define pb push_back
#define pf push_front
#define qb pop_back
#define qf pop_front
#define eb emplace_back
typedef pair<int, int> pii;
typedef pair<ll, int> pli;
#define fi first
#define se second
#define _F(i, a, b) for (int i = a; i <= b; i++)
#define _FR(i, a, b) for (int i = a; i >= b; i--)
#define IF(a,b,c) ((a)?(b):(c));
#define _sort(x) sort((x).begin(),(x).end());
const int inf = 0x3f3f3f3f, mod = 1e9 + 7;
const ll infl = 0x3f3f3f3f3f3f3f3fll;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<ll> dp(n+1,0);
    dp[0]=1;
    dp[1]=1;
    for(ll i=2;i<n+1;i++){
        for(ll j=1;j<min(7*1LL,i+1);j++){
            dp[i]+=(dp[i-j]%mod);
        }
    }
    // for(int i=0;i<n+1;i++){
    //     cout<<dp[i]<<" ";
    // }
    // cout<<endl;
    cout<<dp[n] % mod<<endl;
    return 0;
}