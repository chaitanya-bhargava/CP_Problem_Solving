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
    ll n,x;
    cin>>n>>x;
    vector<pli> arr(n); 
    for(int i=0;i<n;i++){
        cin>>arr[i].first;
        arr[i].second=i;
    }
    sort(arr.begin(),arr.end());
    int i=0;
    int j=n-1;
    int flag=0;
    while(i<j){
        if(arr[i].first+arr[j].first==x){
            cout<<arr[i].second+1<<" "<<arr[j].second+1<<endl;
            flag=1;
            break;
        }
        else if(arr[i].first+arr[j].first>x){
            j--;
        }
        else{
            i++;
        }
    }
    if(flag==0) cout<<"IMPOSSIBLE"<<endl;
    return 0;
}