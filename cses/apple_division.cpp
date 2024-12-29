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
 
ll helper(vector<ll> & arr,ll i,ll sum,ll cost){
    if(i==arr.size()){
        return abs(sum-cost);
    }
    ll not_pick=helper(arr,i+1,sum,cost+arr[i]);
    ll pick=helper(arr,i+1,sum+arr[i],cost);
    return min(pick,not_pick);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<helper(arr,0,0,0)<<endl;
    return 0;
}