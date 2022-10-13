//Ramnit here
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
	int t;
    cin>>t;

    while(t--){
        int n,x,p;
        cin>>n>>x>>p;
        if((x*3)-(n-x) >= p) cout<<"PASS\n";
        else cout<<"FAIL\n";
    }
	return 0;
}