#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int tl=k*l;
    int ts=c*d;
    int el=tl/nl;
    int ep=p/np;
    int t=min(min(ts,el),ep);
    cout<<t/n<<endl;
    return 0;
}