#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while (t--) {
        string S;
        string T;
        
        for(int i =0; i<5; i++) {
            if(S[i] == T[i]) {
                cout<<"G";
            }
            else {
                cout<<"B";
            }
        }
        cout<<endl;
    }
	return 0;
}
