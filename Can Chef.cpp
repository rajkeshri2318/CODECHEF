#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--) {
	     int X,Y;
	     cin>>X>>Y;
	     
	     if(15*X >= 2*Y) {
	         cout<<"yes"<<endl;
	     }
	     else {
	         cout<<"no"<<endl;
	     }
	}
	return 0;
}
