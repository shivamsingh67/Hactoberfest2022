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
        int n,k;
        cin>>n>>k;
        int totalMatch=n-1;
        int reqWin=n-k;
        int maxWins=(totalMatch+reqWin)/2;
        int maxPoints=2*maxWins;
        cout<<maxPoints<<"\n";
    }
	return 0;
}