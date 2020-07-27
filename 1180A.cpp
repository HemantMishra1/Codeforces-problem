#include<bits/stdc++.h>
using namespace std;

int rombus(int n){
    
    
    if(n==0) return 0;
    if(n==1) return 1;
    if(n==2) return 5;
    if(n==3) return 13;
    
    if(n>=4){
         return n*n +(n-1)*(n-1);
         
    }
    
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    cout<<rombus(n);
    
  

return 0;
}
