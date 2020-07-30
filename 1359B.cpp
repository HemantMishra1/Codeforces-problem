#include<bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    
    while(t--){
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    
    char a[n][m];
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>a[i][j];
            }
        }
    if(2*x<y) y=2*x;
    int cost=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(a[i][j]=='.' and (j+1<m and a[i][j+1]=='.')) {cost+=y; j++;}
            else if(a[i][j]=='.') cost+=x;
        }
    }
       cout<<cost<<"\n"; 
    }
    
    
    
    
    return 0;
   
}


