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
        int n,x,k;
        cin>>n>>x>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        int count=0;
        for(int i=0;i<n;i++){
            if(abs(a[i]-b[i])<=k) count++;
        }
        if(count>=x) cout<<"YES\n";
        else cout<<"NO\n";
    }
	return 0;
}