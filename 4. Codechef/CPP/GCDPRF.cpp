//Ramnit here baby
#include<bits/stdc++.h>
using namespace std;

// typedef long long lolo;
#define fasterDaddy ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define all(v) v.begin,v.end()
#define puba push_back
// #define F .first
// #define S .second

int main() {
	fasterDaddy;
	int t;
    cin>>t;

    while(t--){
        int n,x;
        cin >> n;
        vector<int> b, a;
        bool flag = true;
        for (int i = 0; i < n; i++){
            cin >> x;
            b.puba(x);
            if (b[i-1]%b[i] != 0 && i>0){
                flag = false;
            }
        }
        if(flag){
            for (int i = 0; i < n; i++) 
                cout << b[i] << ' ';
            cout<<"\n";
        }
        else
            cout << "-1\n";
    }
	return 0;
}