#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> s(n,vector<int>(3));
    for(int i=0;i<n;i++){
        s[i][2]=i;
        cin>>s[i][1];
    }
    for(int i=0;i<n;i++){
        cin>>s[i][0];
    }
    sort(s.begin(),s.end());
    int j=0;
    int curr=-1;
    vector<int> ans;
    while(j<n){
        if(s[j][1]>curr){
            curr=s[j][0];
            ans.push_back(s[j][2]);
        }
        j++;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}