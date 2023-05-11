
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc,a,b,c;
    
    cin>>tc;
    
    while(tc--){
        
        cin>>a>>b>>c;
        
        if(a>b && a>c){
            
            std::cout << "Alice" << std::endl;
        }
        
        else if(b>a && b>c){
            
            std::cout << "Bob" << std::endl;
        }
        
        else
            std::cout << "Charlie" << std::endl;
    }
    
    
    return 0;
}
