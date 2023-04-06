#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int N;
	    cin>>N;
	    
	    if (N>=4 && N%4 == 0) {
	        cout<<N/4<<endl;
	    }
	    else if (N>=4 && N%4 !=0){
	        cout<<N/4 +1<<endl;
	    }
	    else if (N<4) {
	        cout<<"1"<<endl;
	    }
	}
	return 0;
}
