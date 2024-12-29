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
 
bool checkValid(vector<int> & queens){
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(queens[i]!=-1 && queens[j]!=-1 && abs(queens[i]-queens[j])==abs(i-j)) return false;
        }
    }
    return true;
}

int helper(vector<vector<int>> & blocked,vector<int> & queens,vector<int> & visited,int x){
    if(x==8) return 1;
    int ans=0;
    for(int i=0;i<8;i++){
        if(visited[i]==1) continue;
        if(blocked[x][i]==1) continue;
        queens[x]=i;
        visited[i]=1;
        if(checkValid(queens)) ans+=helper(blocked,queens,visited,x+1);
        queens[x]=-1;
        visited[i]=0;
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> board(8);
    for(int i=0;i<8;i++){
        cin>>board[i];
    }
    vector<vector<int>> blocked(8,vector<int> (8,0));
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j]=='*') blocked[i][j]=1;
        }
    }
    vector<int> queens(8,-1);
    vector<int> visited(8,0);
    cout<<helper(blocked,queens,visited,0)<<endl;
    return 0;
}