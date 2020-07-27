#include<bits/stdc++.h>
using namespace std;

int countfreq(vector<string> &str){
    int n=str[0].size();
    
    int count=0;
    for(int i=0;i<n;++i){
        if(str[0][i]=='Q'){
        	
        	for(int j=i+1;j<n;++j){
        		if(str[0][j]=='A'){
        			
        			for(int k=j+1;k<n;++k){
        				if(str[0][k]=='Q'){
        					
        					count++;
        				}
        			}
        		}
        	}
            
        }
    }

return count;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    vector<string> str;
    str.push_back(s);
    cout<<countfreq(str);
	
    
  

return 0;
}
