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
        int n;
        cin>>n;
        int a[n];
        int maxi=INT_MIN,mini=INT_MAX;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            maxi=max(maxi,a[i]);
            mini=min(mini,a[i]);
        }
        cout<<maxi-mini<<"\n";
    }
	return 0;
}