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
    ifstream cin("cbarn.in");
    ofstream cout("cbarn.out");
    int n;
    cin>>n;
    vector<int> rooms(n);
    for(int i=0;i<n;i++){
        cin>>rooms[i];
    }
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        int curr=0;
        int ct=1;
        for(int j=(i+1)%n;ct<n;j=(j+1)%n){
            curr+=ct*rooms[j];
            ct++;
        }
        mini=min(mini,curr);
    }
    cout<<mini<<endl;
    return 0;
}