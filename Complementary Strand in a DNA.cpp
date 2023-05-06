#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int N;
	    cin>>N;
	    
	    string S;
	    cin>>S;
	    
	    for(int i=0; i<=N; i++) {
	        if (S[i] == 'A') 
	        S[i] = 'T';
	        else if (S[i] == 'T')
	        S[i] = 'A';
	        else if (S[i] == 'C')
	        S[i] = 'G';
	        else if (S[i] == 'G')
	        S[i] = 'C';
	    }
	    
        cout<<S<<endl;
	    }
	
	return 0;
}
