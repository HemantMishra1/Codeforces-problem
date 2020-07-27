// Simple C++ program to count occurrences 
// of pat in txt. 

#include<bits/stdc++.h>
using namespace std;

int countFreq(string &pat,string &txt){
    int N=txt.length();
    int M=pat.length();
    int res=0;
    for(int i=0;i<=N-M;i++){
            int j;
            for(j=0;j<M;j++){
                if(txt[i+j]!=pat[j]) break;
                
            }
            if(j==M){
                res++;
                j=0;
            }
    }
    return res;
}


int main(){
    
    std::vector<string> v;
    string txt = "dhimanman"; 
    string pat = "man"; 
    cout << countFreq(pat, txt); 
   

return 0;
}