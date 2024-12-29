#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    int i=0;
    int j=0;
    while(i<s.size() && j<t.size()){
        if(tolower(s[i])==tolower(t[i])){
            i++;
            j++;
        }
        else if(tolower(s[i])>tolower(t[i])){
            cout<<1<<endl;
            return 0;
        }
        else{
            cout<<-1<<endl;
            return 0;
        }
    }
    if(i<s.size()){
        cout<<1<<endl;
        return 0;
    }
    if(j<t.size()){
        cout<<-1<<endl;
        return 0;
    }
    cout<<0<<endl;
    return 0;
}