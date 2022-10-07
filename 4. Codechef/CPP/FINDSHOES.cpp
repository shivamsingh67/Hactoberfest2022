//Ramnit here
#include<bits/stdc++.h>
using namespace std;

// typedef long long lolo;
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define all(v) v.begin,v.end()
// #define puba push_back
// #define F .first
// #define S .second

int main() {
	faster;
	int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;
        if(m>=n) cout<<n<<"\n";
        else cout<<n+(n-m)<<"\n";
    }
	return 0;
}