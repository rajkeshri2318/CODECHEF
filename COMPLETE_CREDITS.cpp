#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    int m;
	    cin>>m;
	    if(m>65)cout<<"Overload\n";
	    else if(m<35)cout<<"Underload\n";
	    else
	    cout<<"Normal\n";
	}
	return 0;
}
