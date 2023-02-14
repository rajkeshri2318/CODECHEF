#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    if(b>=a && b<=a+200)
	       cout<<"yes"<<endl;
	   else
	       cout<<"No"<<endl;
	}
	return 0;
}
