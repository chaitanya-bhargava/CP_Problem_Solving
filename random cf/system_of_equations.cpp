#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ll n,m;
    cin>>n>>m;
    int ans=0;
    for(int a=0;a*a<=n;a++){
        int b=n-a*a;
        if((a+b*b)==m){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}