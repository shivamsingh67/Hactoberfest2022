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
	int t;
    cin>>t;

    while(t--){
        long long p,a,b,c,x,y;
        cin>>p>>a>>b>>c>>x>>y;
        // long long anar,chakri,minm;
        // anar=;
        // chakri=;
        // minm=;
        cout<<p/min((x*a)+b,(y*a)+c)<<"\n";
    }
	return 0;
}