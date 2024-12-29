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

int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};

void bfs(vector<string> & graph,int & startx,int & starty,vector<vector<int>> & visited){
    queue<pii> q;
    q.push({startx,starty});
    visited[startx][starty]=1;
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int newx=x+dx[i];
            int newy=y+dy[i];
            if(newx>=0 && newx<graph.size() && newy>=0 && newy<graph[0].size() && visited[newx][newy]==0 && graph[newx][newy]=='.'){
                visited[newx][newy]=1;
                q.push({newx,newy});
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<string> graph(n);
    vector<vector<int>> visited(n,vector<int> (m,0));
    for(int i=0;i<n;i++){
        cin>>graph[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(visited[i][j]==0 && graph[i][j]=='.'){
                bfs(graph,i,j,visited);
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}