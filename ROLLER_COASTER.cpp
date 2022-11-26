#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    int x,h;
	    cin>>x>>h;
	    if(x>h || x==h)
	    cout<<"YES"<<endl;
	    else
	    cout<<"No"<<endl;
	    }
	return 0;
}
