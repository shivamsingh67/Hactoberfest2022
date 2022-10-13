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
        for(int i=0;i<n;i++) cin>>a[i];
        if(count(a,a+n,a[0])==n) cout<<"0\n";
        // else if(distance(a,max_element(a,a+n))==n-1) cout<<"1\n";
        else if(a[n-1]==*max_element(a,a+n)) cout<<"1\n";
        else cout<<"2\n";
    }
	return 0;
}