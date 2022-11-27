#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while (t--) {
	    int w,x,y,z;
	    
	    cin>>w>>x>>y>>z;
	    
	    if (w+y*z > x) {
			cout<<"overflow"<<endl;

		}
		else if (w + y*z == x) {
			cout<<"filled"<<endl;

		}
		else {
			cout<<"Unfilled"<<endl;
		}
		
	}
	return 0;
}
