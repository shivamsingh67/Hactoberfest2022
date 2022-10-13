//Ramnit here baby
#include<bits/stdc++.h>
using namespace std;

// typedef long long lolo;
#define fasterDaddy ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define all(v) v.begin,v.end()
// #define puba push_back
// #define F .first
// #define S .second

int main() {
	fasterDaddy;
	long long t;
    cin>>t;

    while(t--){
        long long n,s;
        cin>>n>>s;
        
        long long x = n * (n + 1) / 2;
        x -= s;
      
        if (x >= 1 and x <= n)  
            cout << x << "\n";
        else 
            cout << "-1\n";
        
    }
	return 0;
}