#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
bool isSqaure(int k){
    double root = sqrt(k);
    return root==int(root);
}

int main(){
    ll t;
    cin>>t;
    int ans=0;
    for(int i=1;i<=t;i++){
        for(int j=i;(i*i)+(j*j)<=(t*t);j++){
            int k=i*i+j*j;
            if(isSqaure(k)) ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}