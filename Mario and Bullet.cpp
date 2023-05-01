#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int X,Y,Z;
	    cin>>X>>Y>>Z;
	    
	    if (Z-(Y/X)<=0) {
	        cout<<"0"<<endl;
	    }
	    else cout<<Z-Y/X<<endl;
	}
	return 0;
}
