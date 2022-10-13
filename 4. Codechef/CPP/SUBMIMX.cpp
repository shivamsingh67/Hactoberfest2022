//Ramnit here
#include<bits/stdc++.h>
using namespace std;

typedef long long lolo;
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
        lolo n,m;
        cin>>n>>m;
        lolo total,a,b,c;
        lolo count=0,counta,countb;
        a=n-m;
        if(m>=a-1){
            cout<<a<<"\n";
        }
        else{
            b=a/(m+1);
            c=a%(m+1);
            counta=b+1;
            countb=m+1-c;
            total=countb*b*(b+1)/2+c*(b+1)*(b+2)/2;
            cout<<total<<"\n";
        }
    }
	return 0;
}