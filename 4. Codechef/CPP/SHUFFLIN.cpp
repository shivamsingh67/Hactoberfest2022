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
        int n;
        cin>>n;
        int a[n];
        int e=0,o=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if((a[i]+i+1)%2==0)
                ((a[i]%2)!=0)?o++:e++;
        }
        cout<<n-(abs(e-o))<<"\n";
    }
	return 0;
}