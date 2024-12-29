#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    string s;
    cin>>s;
    set<char> s1;
    for(int i=0;i<s.size();i++){
        s1.insert(s[i]);
    }
    if(s1.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}