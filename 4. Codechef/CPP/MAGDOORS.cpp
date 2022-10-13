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
        string s;
        cin>>s;
        char stats='1';
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!=stats){
                stats=s[i];
                count++;
            }
        }
        cout<<count<<"\n";
    }
	return 0;
}