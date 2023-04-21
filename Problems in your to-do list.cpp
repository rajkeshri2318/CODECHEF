#include <bits/stdc++.h>
using namespace std; 

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
    int t; cin >> t; 
    while(t--)
    {
        int n; cin >> n; 
        int cnt = 0;  
        for(int i = 0; i < n; ++i)
        {
            int x; cin >> x; 
            cnt += x >= 1000;
        }
        cout<<cnt<<"\n"; 
    }
}
