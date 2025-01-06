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
    ifstream cin("reduce.in");
    ofstream cout("reduce.out");
    int n;
    cin>>n;
    vector<pii> a(n,{0,0});
    int maxx=INT_MIN;
    int maxy=INT_MIN;
    int minx=INT_MAX;
    int miny=INT_MAX;
    int smaxx=INT_MIN;
    int smaxy=INT_MIN;
    int sminx=INT_MAX;
    int sminy=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
        if(a[i].first>maxx){
            smaxx=maxx;
            maxx=a[i].first;
        }
        else if(a[i].first>smaxx){
            smaxx=a[i].first;
        }
        if(a[i].second>maxy){
            smaxy=maxy;
            maxy=a[i].second;
        }
        else if(a[i].second>smaxy){
            smaxy=a[i].second;
        }
        if(a[i].first<minx){
            sminx=minx;
            minx=a[i].first;
        }
        else if(a[i].first<sminx){
            sminx=a[i].first;
        }
        if(a[i].second<miny){
            sminy=miny;
            miny=a[i].second;
        }
        else if(a[i].second<sminy){
            sminy=a[i].second;
        }
    }
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        int tempmxx=maxx;
        int tempmnx=minx;
        int tempmxy=maxy;
        int tempmny=miny;
        if(a[i].first==maxx) tempmxx=smaxx;
        if(a[i].first==minx) tempmnx=sminx;
        if(a[i].second==maxy) tempmxy=smaxy;
        if(a[i].second==miny) tempmny=sminy;
        ans=min(ans,(tempmxx-tempmnx)*(tempmxy-tempmny));
    }
    cout<<ans<<endl;
    return 0;
}