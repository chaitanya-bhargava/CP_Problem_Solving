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
    string s;
    cin>>s;
    int n=s.size();
    vector<int> count(26,0);
    for(int i=0;i<n;i++){
        count[s[i]-'A']++;
    }
    int count_odd=0;
    for(int i=0;i<26;i++){
        if(count[i]%2==1) count_odd++;
    }
    if(count_odd>1){
        cout<<"NO SOLUTION";
        return 0;
    }
    string ans;
    int odd_index=-1;
    for(int i=0;i<26;i++){
        int k=count[i];
        for(int j=0;j<k/2;j++){
            ans.push_back(i+'A');
        }
        if(k%2==1){
            odd_index=i;
        }
    }
    if(odd_index!=-1) ans.push_back(odd_index+'A');
    for(int i=25;i>=0;i--){
        int k=count[i];
        for(int j=0;j<k/2;j++){
            ans.push_back(i+'A');
        }
    }
    cout<<ans<<endl;
    return 0;
}