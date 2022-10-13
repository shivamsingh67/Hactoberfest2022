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
        int n,k;
        cin>>n>>k;
        if(n==1){
            cout<<"1\n";
        }
        else if(k>n || k<2){
            cout<<"-1\n";
        }
        else{
            int i;
            for(i=1;i<k;i++) cout<<i<<" ";
            for(int j=n;i<=n;j--,i++) cout<<j<<" ";
            cout<<"\n";
        }
    }
	return 0;
}