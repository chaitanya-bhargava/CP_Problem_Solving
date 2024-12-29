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
    ifstream cin("mowing.in");
    ofstream cout("mowing.out");
    int n;
    cin>>n;
    unordered_map<char,pii> dir;
    dir['N'] = {-1,0};
    dir['S'] = {1,0};
    dir['E'] = {0,1};
    dir['W'] = {0,-1};
    map<pii,int> timing;
    vector<pair<char,int>> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    int x=0;
    int y=0;
    timing[{x,y}]=0;
    int t=0;
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=0;j<arr[i].second;j++){
            x=x+dir[arr[i].first].first;
            y=y+dir[arr[i].first].second;
            t++;
            if(timing.count({x,y})){
                ans=min(ans,t-timing[{x,y}]);
            }
            timing[{x,y}]=t;
        }  
    }
    if(ans==INT_MAX) cout<<-1<<endl;
    else cout<<ans<<endl;
    return 0;
}