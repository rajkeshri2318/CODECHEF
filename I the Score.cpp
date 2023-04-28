#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--) {
	    int A,B;
	    cin>>A>>B;
	    
	    int C,D;
	    cin>>C>>D;
	    
        if (A <= C && B<= D) {
            cout<<"POSSIBLE"<<endl;
        }
        else cout<<"IMPOSSIBLE"<<endl;
	}
	return 0;
}
