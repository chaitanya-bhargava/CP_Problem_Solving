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
    string ans;
    unordered_map<char,bool> mp;
    mp['A']=true;
    mp['E']=true;
    mp['I']=true;
    mp['O']=true;
    mp['U']=true;
    mp['Y']=true;
    mp['a']=true;
    mp['e']=true;
    mp['i']=true;
    mp['o']=true;
    mp['u']=true;
    mp['y']=true;
    for(int i=0;i<s.size();i++){
        if(mp[s[i]]) continue;
        else{
            ans.push_back('.');
            if(s[i]>='A' && s[i]<='Z') ans.push_back(s[i]-'A'+'a');
            else ans.push_back(s[i]);
        } 
    }
    cout<<ans<<endl;
    return 0;
}