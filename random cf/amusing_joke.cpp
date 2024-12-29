#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    string s1;
    string s2;
    string s3;
    cin>>s1>>s2>>s3;
    unordered_map<char,int> mp1;
    unordered_map<char,int> mp2;
    for(int i=0;i<s1.size();i++){
        mp1[s1[i]]++;
    }
    for(int i=0;i<s2.size();i++){
        mp1[s2[i]]++;
    }
    for(int i=0;i<s3.size();i++){
        mp2[s3[i]]++;
    }
    if(mp1==mp2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}