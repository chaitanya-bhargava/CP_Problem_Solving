#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>> grid(n,vector<char> (m,'#'));
    for(int i=1;i<n;i+=4){
        for(int j=0;j<m-1;j++){
            grid[i][j]='.';
        }
    }
    for(int i=3;i<n;i+=4){
        for(int j=1;j<m;j++){
            grid[i][j]='.';
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<grid[i][j];
        }
        cout<<endl;
    }  
    return 0;
}