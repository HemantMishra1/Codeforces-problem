#include<bits/stdc++.h>
#define int long long
using namespace std;


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   
    int n;
    cin>>n;
    int arr[n];
     int count=0;
    int neg_count=0;
    int num_zero=0;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=0;i<n;++i){
        if(arr[i]>1){
            
            count+=arr[i]-1;
            
        }
        else if(arr[i]<0){
            count+=-arr[i]-1;
            neg_count++;
        }
        if(arr[i]==0){
            num_zero++;
        }
        
    }
    if(num_zero>0){
    
        count+=num_zero-1;
        if(neg_count%2!=0){
        count+=1;
        }
        if(neg_count%2==0) count+=1;
        }
    else if(num_zero==0){
        if(neg_count%2!=0){
            count+=2;
        }
    }
   
    cout<<count<<"\n";
    
    return 0;
   
  

}
