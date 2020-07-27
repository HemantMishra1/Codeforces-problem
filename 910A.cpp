#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   
   int n,d;
   cin>>n>>d;
   string s; cin>>s;
   int dp[n];
   fill_n(dp,n,int(1e9));
   dp[0]=0;
   for(int i=1;i<=n-1;++i){
       if(s[i]=='0') continue;
       
       for(int j=1;j<=d;++j){
           if(i-j>=0){
               dp[i]=min(dp[i],dp[i-j]+1);
           }
       }
   }
   if(dp[n-1]>=int(1e9)) dp[n-1]= -1;
   
   cout<< dp[n-1];
   
      
   return 0;
   
  

}
