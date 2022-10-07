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
        int x,y,k;
        cin>>x>>y>>k;
        if(abs(x)%k==0 && abs(y)%k==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
	return 0;
}