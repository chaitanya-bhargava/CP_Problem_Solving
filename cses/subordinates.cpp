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

class Node{
    public:
    int val;
    vector<Node*> children; 
    Node(int num){
        val=num;
    }
};

int helper(Node* root,vector<ll> & sub_count){
    if(!root) return 0;
    if(sub_count[root->val]!=-1) return sub_count[root->val];
    int ans=0;
    for(int i=0;i<root->children.size();i++){
        ans+=1+helper(root->children[i],sub_count);
    }
    return sub_count[root->val]=ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<Node*> arr(n+1,NULL);
    for(int i=1;i<n+1;i++){
        arr[i]=new Node(i);
    }
    for(int i=2;i<n+1;i++){
        int k;
        cin>>k;
        arr[k]->children.push_back(arr[i]);
    }
    vector<ll> sub_count(n+1,-1);
    helper(arr[1],sub_count);
    for(int i=1;i<n+1;i++){
        cout<<sub_count[i]<<" ";
    }
    return 0;
}