#include <iostream>
using namespace std;
int main () {
    int t;
    cout<<"terms"<<endl;
    cin>>t;
    
    while (t--) {
        int n;
        cout<<"Digits"<<endl;
        cin>>n;
        
        int sum = 0;
        
        while(n!= 0) {
            int r = n%10;
            sum += r;
            n /= 10;
            
        }
        
        cout<<sum<<endl;
        
    }
}
