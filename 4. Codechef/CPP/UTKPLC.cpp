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
        char a,b,c;
        cin>>a>>b>>c;
        char x,y;
        cin>>x>>y;
        if(a==x || a==y) cout<<a<<"\n";
        else cout<<b<<"\n";
    }
	return 0;
}