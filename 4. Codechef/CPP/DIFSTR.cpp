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
        int n;
        cin >> n;
        vector<string> s;

        for (int i=0;i<n;i++){
            string x;
            cin>>x;
            s.puba(x);
        }

        string res = "";
        for (int i=0;i<n;i++){
            if (s[i][i]=='0'){
                res+='1';
            }
            else{
                res+='0';
            }
        }
        cout<<res<<"\n";
    }
	return 0;
}