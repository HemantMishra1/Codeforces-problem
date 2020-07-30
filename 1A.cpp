#include<bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   
    int n,m,a;
    cin>>n>>m>>a;
    long long ans;
    
    ans=ceil(n/double(a))*ceil(m/double(a));
    cout<<ans;
    return 0;
   
}


