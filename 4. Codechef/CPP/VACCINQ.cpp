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
        int n,p,x,y;
        cin>>n>>p>>x>>y;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int o=0,c=0;
        for(int i=0;i<p;i++){
            if(a[i]==0) c++;
            else o++;
        }
        cout<<o*y+c*x<<"\n";
    }
	return 0;
}