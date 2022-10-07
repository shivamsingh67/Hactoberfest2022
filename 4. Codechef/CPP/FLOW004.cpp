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
        long n;
        cin>>n;
        int sum=n%10;
        // n/=10;       //won't be applicable i case of n=singledigit
        while(n>9){
            n/=10;
        }
        sum+=n;
        cout<<sum<<"\n";
    }
	return 0;
}