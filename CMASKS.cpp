#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while (t--) {
	    int x,y;
	    cin>>x>>y;
	    
	    if(x*100<y*10)
	     cout<<"Disposable\n";
	    else if(x*100 == y*10)
	     cout<<"Cloth\n";
	    else
	     cout<<"Cloth\n";
	}
	return 0;
}
