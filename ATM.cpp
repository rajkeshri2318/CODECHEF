#include <iostream>
using namespace std;
int main () {
    int x,y;
    cin>>x>>y;
    
    while (x<=y) {
    
    if (x%5==0 && y<= 120) {
        cout<<y-(x+0.50)<<endl;
        break;
    }
    else {
        cout<<y<<endl;
        break;
    }
    
    }
    return 0;
}
