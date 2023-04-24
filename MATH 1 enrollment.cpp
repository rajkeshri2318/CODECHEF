#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t=0;
	cin>>t;
	while(t--)
	{
	    int x=0,y=0;
	    cin>>x>>y;
	    if(y>x)
	                cout<<y-x<<endl;
	    else
	                cout<<0<<endl;
	}
	return 0;
}
