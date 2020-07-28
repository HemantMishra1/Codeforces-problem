#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;++i) cin>>arr[i];
   int dp[n];
   fill_n(dp,n,int(1));
   
   for(int j=1;j<=n-1;++j){
      for(int i=j-1;i<j;++i){
           if(arr[i]<=arr[j]){
               dp[j]=dp[i]+1;
           }
           else continue;
    
       }
   }
   
   
   cout<< *max_element(dp,dp+n);
   
      
   return 0;
   
  

}
