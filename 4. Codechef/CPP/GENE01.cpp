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
	char a,b;
	cin>>a>>b;
	if(a==b) cout<<a<<"\n";
	else if(a=='R' || b=='R') cout<<"R\n";
	else cout<<"B\n";
	return 0;
}