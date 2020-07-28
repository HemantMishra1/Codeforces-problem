#include<iostream>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   
    int n,v;
    cin>>n>>v;
    
    int min_cost=0;
    
    if(n-1<=v){ 
        cout<<n-1;
        return 0;
    }
    min_cost=v;
    int city_reach=1;
    for(int i=2;i<=n;++i){
    
        city_reach+=1;
        if(n-city_reach<v){
            break;
        }
        
        
        min_cost+=i;
        
        
    }
    cout<<min_cost;
    return 0;
   
}


