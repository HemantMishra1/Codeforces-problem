#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        
        
        int num=0;
        int flag=0;
        
        for(int i=0;i<n;++i){
            cin>>arr[i];
            if(arr[i]%2==0){ 
            num=i;
            flag=1;
            
            }
        }
            if(flag==1){
                cout<<1<<"\n"<<num+1<<"\n";
                
            }
            else{
                
                if(n==1 or n==0) cout<<-1<<"\n";
                else cout<<2<<"\n"<<1<<" "<<2<<"\n";
            }
    }
return 0;
}
