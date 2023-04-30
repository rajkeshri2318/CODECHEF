#include <iostream>
using namespace std;


void solve() {
    int A,B,C;
    cin>>A>>B>>C;
    
    if (B>=A && B>=C) {
        cout<<"YES"<<endl;
    }
    else 
    cout<<"NO"<<endl;
    
}
int main() {
	
	int t;
	cin>>t;
	
	while(t--) {
	    solve();
	}
	return 0;
}
