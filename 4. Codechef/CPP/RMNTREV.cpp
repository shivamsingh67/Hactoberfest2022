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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        while(k--){
            reverse(s.begin(),s.begin()+k+1);
        }
        cout<<s<<"\n";
    }
	return 0;
}