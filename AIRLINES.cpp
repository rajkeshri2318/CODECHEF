#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int X,Y,Z;
	    cin>>X>>Y>>Z;
	    
	    if (Y<=(X*10)) {
	        cout<<Y*Z<<endl;
		    
		    
		    
		    
		    
	    }
	    else {
	        cout<<X*10*Z<<endl;
	    }
	}
	return 0;
}
