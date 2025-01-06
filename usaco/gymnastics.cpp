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
    ifstream cin("gymnastics.in");
    ofstream cout("gymnastics.out");
    int k,n;
    cin>>k>>n;
    vector<vector<int>> mp(k+1,vector<int> (n+1));
    for(int i=1;i<=k;i++){
        for(int j=1;j<=n;j++){
            int num;
            cin>>num;
            mp[i][num]=j;
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            bool inc=true;
            bool dec=true;
            for(int l=1;l<=k;l++){
                if(mp[l][i]>mp[l][j]){
                    inc=false;
                }
                if(mp[l][i]<mp[l][j]){
                    dec=false;
                }
            }
            if(inc || dec) ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}