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
    int n,m;
    cin>>n>>m;
    map<int,int> tickets;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        tickets[k]++;
    }
    for(int i=0;i<m;i++){
        int k;
        cin>>k;
        if(tickets.empty()){
            cout<<-1<<endl;
            continue;
        }
        auto it=tickets.lower_bound(k);
        int ind=(*it).first;
        if(it==tickets.end() || ind>k){
            if(it!=tickets.begin()){
                it--;
                int ind2=(*it).first;
                cout<<ind2<<endl;
                if(tickets[ind2]==1){
                    tickets.erase(ind2);
                }
                else{
                    tickets[ind2]--;
                }
            }
            else cout<<-1<<endl;
        }
        else{
            cout<<ind<<endl;
            if(tickets[ind]==1){
                tickets.erase(ind);
            }
            else{
                tickets[ind]--;
            }
        }
    }
    return 0;
}