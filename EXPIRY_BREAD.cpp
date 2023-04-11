#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for (int i=0;i<t;i++) {
	    
	    int N,M,K;
	    cin>>N>>M>>K;
	    
	    if((M*K)>=N) {
	        cout<<"YES"<<endl;
	    }
	    
	    else {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
