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
    ifstream cin("lifeguards.in");
    ofstream cout("lifeguards.out");
    int n;
    cin>>n;
    vector<int> t(1002,0);
    vector<pii> a(n);
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a[i]={x,y};
        t[x]++;
        t[y]--;
    }
    int ans=0;
    for(int j=0;j<n;j++){
        int curr=0;
        vector<int> temp=t;
        vector<int> t2(1002,0);
        temp[a[j].first]--;
        temp[a[j].second]++;
        for(int i=1;i<1002;i++){
            t2[i]=t2[i-1]+temp[i];
            if(t2[i]>0) curr++;
        }
        ans=max(ans,curr);
    }
    cout<<ans<<endl;
    return 0;
}