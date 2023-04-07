#include<bits/stdc++.h>
#include <iostream>
using namespace std;


int main(){
    int rounds;
    cin>>rounds;
    int cum_a=0;
    int cum_b=0;
    int maxi=0;
    int ind=-1;
    for(int i=0;i<rounds;i++){
        int s;
        int t;
        cin>>s>>t;
        cum_a+=s;
        cum_b+=t;
        int lead=abs(cum_a-cum_b);
        if(maxi<lead){
            maxi=lead;
            if(cum_a>cum_b) ind=1;
            else ind=2;
        }
        
    }
    
    if(ind==1) cout<<ind<<" "<<maxi<<endl;
    else cout<<ind<<" "<<maxi<<endl;
    
    
    return 0;
}
