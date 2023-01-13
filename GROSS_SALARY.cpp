#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while (t--) {
        float S;
        cin>>S;
        
        if (S<1500) {
            cout<<S+(0.1*S)+(0.9*S)<<endl;
        }
        else if (S>= 1500) {
            cout<<S+500+(0.98*S)<<endl;
        }
        
        
    }
	return 0;
}
