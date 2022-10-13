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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count0 = 0, count1 = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0')
                count0++;
            else
                count1++;
        }
        int maxP = min(count0, count1);
        
        if (maxP == 0) {
            cout << "Bob\n";
        }
        
        else if(maxP >= 2 && (count0 + count1 - 2 * maxP) % 2 == 0){
            cout << "Bob\n";
        }
        
        else
            cout << "Alice\n";
    }
	return 0;
}