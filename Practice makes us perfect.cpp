#include <iostream>
using namespace std;

int main () {
    int t[4];
    
    for(int i =0; i <4 ; i++) {
        cin>>t[i] ;
        
    }
    int cunt=0;
    for(int i=0; i<4; i++) {
        if (t[i] >=10) {
            cunt++;
        }
        else 
        continue;
    }
    cout<<cunt;
}
