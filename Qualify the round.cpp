#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	 while (t--) {
	     int X,A,B;
	     cin>>X>>A>>B;
	     
	     if((1*A + 2*B) >= X) {
	         cout<<"Qualify"<<endl;
	     }
	     else {
	         cout<<"NotQualify"<<endl;
	     }
	 }
	return 0;
}
