#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while (t--) {
	    int x1,y1,x2,y2;
	    
	    cin>>x1>>y1>>x2>>y2;
	    int a,b;
	    
	    if (x1>x2)
	    a= x1-x2;
	    
	    else 
	    a = x2-x1;
	    
	    if (y1>y2)
	    b = y1-y2;
	    
	    else 
	    b = y2-y1;
	    
	    
	    if (a>b) 
	    cout<<a<<endl;
	    
	    else 
	    cout<<b<<endl;
	    
	}
	return 0;
}
