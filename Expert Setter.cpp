#include <iostream>
using namespace std;

int main() {
    int t;
cin>>t;
cout<<endl;
for(int i=0; i<t;i++)
{
    int x,y,check ;
    cin>>x>>y ;
    if(x%2)
     check=x/2+1 ;
    else check=x/2 ;
    if(y>=check)
    cout<<"YES" ;
    else cout<<"NO" ;
    cout<<endl ;
    }
	// your code goes here
	return 0;
}
