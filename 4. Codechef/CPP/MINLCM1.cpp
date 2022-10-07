//Ramnit here baby
#include<bits/stdc++.h>
using namespace std;

typedef long long lolo;
#define fasterDaddy ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define all(v) v.begin,v.end()
// #define puba push_back
// #define F .first
// #define S .second

int main() {
	fasterDaddy;
	lolo t;
    cin>>t;

    while(t--){
        lolo x,y;
        cin>>x>>y;
        // lolo mini,maxi;
        // mini=2*x;       //lowest multiple of x geater than x is 2x
        // maxi=(x*y)*((x*y)-1);       //largest multiple is common multiple of x&y less than (x*y)^2 otherwise lcm will be x or y
        cout<<2*x<<" "<<(x*y)*((x*y)-1)<<"\n";
    }
	return 0;
}