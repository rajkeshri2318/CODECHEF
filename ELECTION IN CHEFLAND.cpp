#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    while (t--) {
        int N,X;
        cin>>N>>X;
        int arr[N];
        
        for (int i=0; i <N; i++) {
            
            cin>>arr[i];
            
        }
        
        int count=0;
        for(int i=0; i<N; i++) {
         
          if (arr[i]>=X) {
             
             count ++; 
          } 
          
        
        }
        cout<<count<<endl;
    }
    
    return 0;
}
