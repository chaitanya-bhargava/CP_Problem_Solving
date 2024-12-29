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
    vector<pii> arr(n); 
    for(int i=0;i<n;i++){
        cin>>arr[i].first;
    }
    for(int i=0;i<n;i++){
        cin>>arr[i].second;
    }
    int maxi=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            maxi=max(maxi,(arr[i].first-arr[j].first)*(arr[i].first-arr[j].first)+(arr[i].second-arr[j].second)*(arr[i].second-arr[j].second));
        }
    }
    cout<<maxi<<endl;
    return 0;
}