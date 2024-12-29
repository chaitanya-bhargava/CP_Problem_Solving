#include<bits/stdc++.h>

using namespace std;

int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int avg=(x1+x2+x3)/3;
    int ans=abs(avg-x1)+abs(avg-x2)+abs(avg-x3);
    cout<<ans<<endl;
    return 0;
}