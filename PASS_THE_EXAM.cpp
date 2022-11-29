#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while (t--) {
        int a,b,c,x;
        cin>>a>>b>>c;
        
        if (a <10 || b<10 || c<10) {
            cout<<"FAIL"<<endl;
        }
        else {
            x = a+b+c;
            
            if (x>=100) {
                cout<<"PASS"<<endl;
            }
            else {
                cout<<"FAIL"<<endl;
            }
        }
    }
	return 0;
}
