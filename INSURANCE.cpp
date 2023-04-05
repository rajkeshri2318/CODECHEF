#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while (t--) {
	    int X,Y;
	    cin>>X>>Y;
	    
	    if (Y<=X) {
	        cout<<Y<<endl;
	    }
	    else {
	        cout<<X<<endl;
	    }
	}
	return 0;
}
