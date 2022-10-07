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
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        int min=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0')
                min+=a;
            else
                min+=b;
        }
        cout<<min<<"\n";
    }
	return 0;
}