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
        int p[n];
        for(int i=0;i<n;i++) p[i]=i+1;
        for(int i=1;i<n;i++){
            if(p[i]%(i+1)==0) swap(p[i],p[i-1]);
        }
        for(int i=0;i<n;i++) cout<<p[i]<<" ";
        cout<<"\n";
    }
	return 0;
}