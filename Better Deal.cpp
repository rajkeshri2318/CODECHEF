#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--) {
	    int A,B;
	    cin>>A>>B;
	    
	    int A_price = 100 - A*(100/100);
	    int B_price = 200 - B*(200/100);
	    
	    if(A_price < B_price) 
	    cout<<"FIRST"<<endl;
	    
	    else if (A_price > B_price)
	    cout<<"SECOND"<<endl;
	    
	    else 
	    cout<<"BOTH"<<endl;
	}
	return 0;
}
