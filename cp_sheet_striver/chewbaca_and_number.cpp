#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int i=0;
    if(s[0]=='9') i++;
    for(;i<s.size();i++){
        if(s[i]>'4'){
            s[i]='9'-s[i]+'0';
        }
    }
    cout<<s<<endl;
    return 0;
}