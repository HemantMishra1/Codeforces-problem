#include<bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin>>n>>k;
    int a[n];
    int count=0;
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    for(int i=0;i<n-1;++i){
        if(i+1<n and a[i]+a[i+1]<k) {
            count+=k-(a[i]+a[i+1]);
            a[i+1]+=k-(a[i]+a[i+1]);
            
        }
    }
    cout<<count<<"\n";
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    
    
    
    
   
    
    
    
    
    
    return 0;
   
}


