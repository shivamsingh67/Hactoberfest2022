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
        
        if (k==0){
            cout<<"YES\n0\n";
            continue;
        }
        
        if (k%2==0){
            cout << "NO\n";
            continue;
        }

        int res = 1;
        vector<int> v;
        int s=0;

        for (int i=31;i>=0;i--){
            if (((1 << i) & k)!=0){
                s=i+1;
                break;
            }
        }

        k+=(1 << s)-1;
        k/=2;
        
        cout << "YES\n"<<s<<"\n";
        
        for (int i=s-2;i>=0;i--){
            if (((1 << i) & k)!=0){
                v.push_back(res);
                res+=(1 << i);
            }
            
            else{
                res-=(1 << i);
                v.push_back(res);
            }
        }

        for(int i=s-2;i>=0;i--){
            cout<<v[i]<<"\n";
        }
        
        cout<<res<<"\n";
    }
	return 0;
}