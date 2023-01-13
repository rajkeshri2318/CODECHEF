#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while (t--) {
        int n;
        cin>>n;
        int rem, rev=0;
        int a=n;
        
        while (n>0) {
            rem = n%10;
            rev = (rev*10)+rem;
            n = n/10;
            
        }
        if (a == rev) {
            cout<<"wins"<<endl;
        }
        else {
            cout<<"loses"<<endl;
        }
        
    }

	return 0;
}
