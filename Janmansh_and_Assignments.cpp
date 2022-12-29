#include <iostream>
using namespace std;
int xyz(){
    int n;
    cin>>n;
    int h=n+3;
    (h>10)?cout<<"no"<<endl : cout<<"yes"<<endl;
    return 0;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    xyz();
	}
}
