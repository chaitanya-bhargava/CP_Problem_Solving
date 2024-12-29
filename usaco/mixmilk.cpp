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
    ifstream cin("mixmilk.in");
    ofstream cout("mixmilk.out");
    int c1,m1;
    int c2,m2;
    int c3,m3;
    cin>>c1>>m1;
    cin>>c2>>m2;
    cin>>c3>>m3;
    
    for(int i=0;i<99;i+=3){
        int pour1=min(m1,c2-m2);
        m1-=pour1;
        m2+=pour1;
        int pour2=min(m2,c3-m3);
        m2-=pour2;
        m3+=pour2;
        int pour3=min(m3,c1-m1);
        m3-=pour3;
        m1+=pour3;
    }
    int pour1=min(m1,c2-m2);
    m1-=pour1;
    m2+=pour1;
    cout<<m1<<endl;
    cout<<m2<<endl;
    cout<<m3<<endl;
    return 0;
}