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
    unordered_map<string,bool> visited;
    string curr;
    for(int i=0;i<n;i++) curr.push_back('0');
    int m=pow(2,n);
    int count=1;
    cout<<curr<<endl;
    while(count!=m){
        visited[curr]=true;
        for(int i=0;i<n;i++){
            curr[i]='1'-curr[i]+'0';
            if(visited[curr]){
                curr[i]='1'-curr[i]+'0';
            }
            else{
                cout<<curr<<endl;
                count++;
                break;
            }
        }
    }
    return 0;
}