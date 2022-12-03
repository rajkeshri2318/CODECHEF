#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    float a,b,c,d;
	    cin>>a>>b>>c;
	    d=(a+b)/2;
	    
	    if(d>c)
	    {
	        cout<<"yes"<<endl;
	        
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
