#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    
    while (t--) {
        int N;
        cin>>N;
        
        string S;
        cin>>S;
        
        string A = S.substr(0,N/2);
        string B = S.substr(N/2,N);
        
        if (A == B) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
	return 0;
}
