//Ramnit here
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fasterDaddy ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
// #define puba push_back
// #define F .first
// #define S .second

int main() {
	fasterDaddy;
	int t;
    cin>>t;

    while(t--){
        string n;
    ll k;
    cin>>n>>k;
    sort(all(n));
    ll st = 1;
    while(k>=1&&n[0]!='9') {
        for(int i=0;i<sza(n);i++) {
            if(k<1)
            break;
            if(n[i]=='9')
            break;
            while(n[i]<(st+'0')&&k>=1) {
                n[i] = n[i] + 1;
                k-=1;
            }
        }
        st++;
    }
    ll ans = 1;
    for(int i=0;i<sza(n);i++) {
        ans*=(n[i]-'0');
    }
    cout<<ans<<"\n";
    }
	return 0;
}