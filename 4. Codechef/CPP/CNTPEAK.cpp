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
        if(n>3){
            int sum=0;
            sum=pow(3,(n-3))*(n-2)*8;
            sum+=floor(sum/4);
            cout<<sum<<"\n";
        }
        else if(n==3) cout<<"10\n";
        else cout<<"0\n";
    }
	return 0;
}