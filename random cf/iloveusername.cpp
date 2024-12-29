#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ll t;
    cin>>t;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    int ans=-1;
    while(t--){
        int num;
        cin>>num;
        if(num>maxi || num<mini){
            ans++;
        }
        maxi=max(maxi,num);
        mini=min(mini,num);
    }
    cout<<ans<<endl;
    return 0;
}