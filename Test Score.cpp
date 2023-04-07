#include <iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    
    while(t--) {
        int N,X,Y;
        cin>>N>>X>>Y;
        
        if(Y%X==0 && Y%X<=N) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}
