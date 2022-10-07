//Ramnit here
#include<bits/stdc++.h>
using namespace std;

typedef long long lolo;
#define fasterDaddy ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define all(v) (v).begin,(v).end()
// #define puba push_back
// #define F .first
// #define S .second

int main() {
	fasterDaddy;
	int t;
    cin>>t;

    while(t--){
        lolo n;
        cin>>n;
        lolo a[n];
        for(lolo i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        cout<<(a[n-1]-a[0])*(a[n-2])<<"\n";
    }
	return 0;
}