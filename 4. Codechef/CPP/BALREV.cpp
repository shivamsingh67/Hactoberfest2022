//Ramnit here
#include<bits/stdc++.h>
using namespace std;

// typedef long long lolo;
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define all(v) v.begin,v.end()
// #define puba push_back
// #define F .first
// #define S .second

int main() {
	faster;
	int t;
    cin>>t;

    while(t--){
        int n;
        string st;
        cin>>n>>st;
        sort(st.begin(),st.end());
        //reverse(st.begin(),st.end());
        cout<<st<<"\n";
    }
	return 0;
}