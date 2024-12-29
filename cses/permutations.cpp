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
    if(n==1) {
        cout<<1<<endl;
        return 0;
    }
    if(n==2 || n==3){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    int odd_start=n;
    int even_start=n;
    if(n%2==0){
        odd_start=n-1;
    }
    else{
        even_start=n-1;
    }
    for(int i=2;i<even_start+1;i+=2){
        cout<<i<<" ";
    }
    for(int i=1;i<odd_start+1;i+=2){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}