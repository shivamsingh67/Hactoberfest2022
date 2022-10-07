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
        int x,y;
        cin>>x>>y;
        int count=0;
        while(x!=y){
            count++;
            if(x<y) x+=2;
            else x--;
        }
        cout<<count<<"\n";
    }
	return 0;
}