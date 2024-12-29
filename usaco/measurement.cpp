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
    ifstream cin("measurement.in");
    ofstream cout("measurement.out");
    ll n;
    cin>>n;
    vector<pair<ll,pair<string,ll>>> log(n);
    for(ll i=0;i<n;i++){
        cin>>log[i].first>>log[i].second.first>>log[i].second.second;
    }
    sort(log.begin(),log.end());
    ll ans=0;
    unordered_map<string,pair<ll,bool>> milk;
    milk["Mildred"] = {7,true};
    milk["Elsie"] = {7,true};
    milk["Bessie"] = {7,true};
    for(auto x:log){
        ll flag=0;
        milk[x.second.first].first += x.second.second;
        ll maxi = 0;
        maxi = max(milk["Mildred"].first,maxi);
        maxi = max(milk["Elsie"].first,maxi);
        maxi = max(milk["Bessie"].first,maxi);
        if(milk["Mildred"].first==maxi) {
            if(!milk["Mildred"].second){
                milk["Mildred"].second = true;
                flag = 1;
            }
        }
        else {
            if(milk["Mildred"].second){
                milk["Mildred"].second = false;
                flag = 1;
            }
        }
        if(milk["Elsie"].first==maxi) {
            if(!milk["Elsie"].second){
                milk["Elsie"].second = true;
                flag = 1;
            }
        }
        else {
            if(milk["Elsie"].second){
                milk["Elsie"].second = false;
                flag = 1;
            }
        }
        if(milk["Bessie"].first==maxi) {
            if(!milk["Bessie"].second){
                milk["Bessie"].second = true;
                flag = 1;
            }
        }
        else {
            if(milk["Bessie"].second){
                milk["Bessie"].second = false;
                flag = 1;
            }
        }
        if (flag == 1) ans++;
    }
    cout<<ans<<endl;
    return 0;
}