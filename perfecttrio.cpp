#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    int mx;
	    cin>>a>>b>>c;
	    if(a>b&&a>c){
	        mx=a;
	    }
	    else if( b>a&&b>c){
	        mx=b;
	    }
	    else{
	        mx=c;
	    }
	    int temp=a+b+c;
	    if(temp==2*mx){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
}
