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
        int a, b, p, q;
        cin >> a >> b >> p >> q;
        if (a == p && b == q)
            cout << "0\n";

        else if ((a + b) % 2 == (p + q) % 2)
            cout << "2\n";

        else
            cout << "1\n";
    }
	return 0;
}