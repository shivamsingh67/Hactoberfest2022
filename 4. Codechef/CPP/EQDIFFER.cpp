//Ramnit here baby
#include<bits/stdc++.h>
using namespace std;

// typedef long long lolo;
#define fasterDaddy ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define all(v) v.begin,v.end()
#define puba push_back
// #define F .first
// #define S .second

int main() {
	fasterDaddy;
	int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        vector<int> a(n);
        map<int,int> m;
        int maxm=0;
        
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.puba(x);
            m[x]++;
            maxm=max(maxm,m[x]);
        }
        
        if(n<=2){
            cout<<"0\n";
        }
        else if(maxm==1){
            cout<<n-2<<"\n";
        }
        else{
            cout<<n-maxm<<"\n";
        }
    }
	return 0;
}