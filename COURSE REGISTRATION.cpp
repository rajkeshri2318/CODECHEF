#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int N,M,K;
	    cin>>N>>M>>K;
	    
	    if (K >= M) {
	        cout<<"NO"<<endl;
	    }
	    else {
	       
	       if ((N+K) <= M) {
	           cout<<"YES"<<endl;
	       } 
	       else {
	           cout<<"NO"<<endl;
	       }
	        
	    }
	}
	return 0;
}
