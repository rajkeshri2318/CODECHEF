#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while (t--) {
	    int a,b,x;
	    cin>>a>>b>>x;
	    
	    if ((b-a)%x==0) {
	        cout<<(b-a)/x<<endl;
	    }

	}
	return 0;
}
