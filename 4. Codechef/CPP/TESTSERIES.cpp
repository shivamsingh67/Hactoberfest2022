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
        int match[5];
        int ind=0,eng=0;
        for(int i=0;i<5;i++){
            cin>>match[i];
            if(match[i]==1) ind++;
            if(match[i]==2) eng++;
        }
        if(ind>eng) cout<<"INDIA\n";
        else if(eng>ind) cout<<"ENGLAND\n";
        else cout<<"DRAW\n";
    }
	return 0;
}