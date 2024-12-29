#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    reverse(t.begin(),t.end());
    if(s==t){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}