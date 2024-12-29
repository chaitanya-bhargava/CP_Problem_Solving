#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string ans;
    int i=0;
    int flag=0;
    while(i<s.size()){
        if(s.substr(i,3)=="WUB"){
            i+=3;
            flag=0;
        }
        else{
            if(flag==0){
                ans.push_back(' ');
                flag=1;
            }
            ans.push_back(s[i]);
            i++;
        }
    }
    cout<<ans<<endl;
    return 0;
}