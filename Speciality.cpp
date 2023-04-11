#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int X,Y,Z;
	    cin>>X>>Y>>Z;
	    
	    if(X>Y && X>Y) {
	        cout<<"SETTER"<<endl;
	    }
	    else if (Y>X && Y>Z) {
	        cout<<"TESTER"<<endl;
	    }
	    else {
	        cout<<"EDITORIALIST"<<endl;
	    }
	}
	return 0;
}
