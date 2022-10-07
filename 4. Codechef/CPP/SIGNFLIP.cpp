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
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0; i<k;i++){
            if (a[i]<0){
                a[i]*=-1;
            }
        }
        
        int sum=0;
        for(int i=0; i<n;i++){
            if (a[i]>0){
                sum+=a[i];
            }
        }

        cout << sum << endl;
    }
	return 0;
}