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
        int a,b,a1,b1,a2,b2;
        cin>>a>>b>>a1>>b1>>a2>>b2;
        int c1=0,c2=0;
        if((a==a1 || a==b1) && (b==b1 || b==a1)){
            cout<<"1\n";
            // continue;
        }
        else if((a==a2 || a==b2) && (b==b2 || b==a2)){
            cout<<"2\n";
            // continue;
        }
        else{
            cout<<"0\n";
        }
    }
	return 0;
}