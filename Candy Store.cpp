#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--) {
	    int X,Y;
	    cin>>X>>Y;
	    
	    if(Y<=X) cout<<Y<<endl;
	    
	    else cout<<X+((Y-X)*2)<<endl;
	}
	return 0;
}
