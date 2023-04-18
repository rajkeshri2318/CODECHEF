#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c,d;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c>>d;
	    a=a-c;
	    b=b-d;
	    if(a<b){
	    cout<<"First"<<endl;
	    }
	    
	    else if(a>b)
	    cout<<"Second"<<endl;
	   // break;
	    else
	    cout<<"Any"<<endl;
	    
	}
// 	if(a=b)
// 	cout<<"Any"<<endl;
	return 0;
}
