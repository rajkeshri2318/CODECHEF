#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while (t--) {
	    int N;
	    cin>>N;
	    
	    if (N%2 == 0) {
	        if (N%4 == 0) {
	            cout<<"NO"<<endl;
	        }
	        else {
	            cout<<"YES"<<endl;
	        }
	    }
	    else {
	        continue;
	    }
	}
	return 0;
}
