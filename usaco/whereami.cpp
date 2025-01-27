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
    ifstream cin("whereami.in");
    ofstream cout("whereami.out");
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=1;i<=n;i++){
        unordered_map<string,bool> mp;
        int flag=0;
        for(int j=0;j<=n-i;j++){
            string temp=s.substr(j,i);
            if(mp.count(temp)){
                flag=1;
                break;
            }
            mp[temp]=true;
        }
        if(flag==0){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}