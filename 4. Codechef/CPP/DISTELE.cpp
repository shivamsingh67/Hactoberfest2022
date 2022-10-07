//Ramnit here
#include<bits/stdc++.h>
using namespace std;

typedef long long lolo;
#define fasterDaddy ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define all(v) v.begin,v.end()
// #define puba push_back
// #define F .first
// #define S .second

int mod=1e9+7;

// int distinct(int* a, int n){
//     set<int> S;
//     for (int i = 0; i < n; i++) {
//         S.insert(a[i]);
//     }
//     int ans = S.size();
//     return ans;
// }

int main() {
	fasterDaddy;
	int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        
        map<int,int> f;
        lolo res=1;
        
        for(int i=0;i<n;i++) f[a[i]]++;
	    
	    for(auto i : f) {
	        int x=i.second;
	        res*=(x+1);
	        res%=mod;
	    }
	    
	    cout<<res-1<<"\n";
	    
        // int res=(pow(2,n))-1;
        // cout<<res<<"pow(2,n)\n";
        
        // int m=distinct(a,n);
        // cout<<m<<"distinct(a,n)\n";
        
        // if(m<n) res-=pow(2,n-m);
        // cout<<res<<"\n";
    }
	return 0;
}