#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int power=log10(n);
        string num=to_string(n);
        vector<int> ans;
        for(int i=0;i<num.size();i++){
            if(num[i]!='0'){
                ans.push_back(((int)(num[i]-'0'))*pow(10,power));
            }
            power--;
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}