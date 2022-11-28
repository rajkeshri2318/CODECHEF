#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while (t--) {
	    int x,y;
	    int z, w;
	    cin>>x>>y;
	    
	    z= x/y;
	    w = x%y;
	    
	    cout<<z+w<<endl;
	    
	    
	}
	return 0;
}
