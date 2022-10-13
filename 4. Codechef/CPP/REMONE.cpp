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
        long long n;
        cin>>n;
        long long a[n],b[n-1];
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        for(long long i=0;i<n-1;i++){
            cin>>b[i];
        }
        
        sort(a,a+n);
        sort(b,b+(n-1));
        // int count1=0,count2=0;
        
        // if(n==2){
        //     if(a[1]<b[0]){
        //         cout<<b[0]-a[1]<<"\n";
        //     }
        //     else{
        //         cout<<b[0]-a[0]<<"\n";
        //     }
        // }
        
        // else{
        //     if(b[0]-a[0]==b[n-2]-a[n-1]){
        //         cout<<b[n-2]-a[n-1]<<"\n";
        //     }
        //     else{
        //         if(b[0]-a[1]==b[n-2]-a[n-1]){
        //             cout<<b[0]-a[1]<<"\n";
        //         }
        //         else{
        //             cout<<b[0]-a[0]<<"\n";
        //         }
        //     }
        // }
        
        long long diff1,diff2;
        map<long long, long long> m;
        for (long long i = 0; i < n - 1; i++){
            diff1 = b[i] - a[i];
            diff2 = b[i] - a[i + 1];
            
            if (diff1 == diff2){
                if (diff1 > 0)
                    m[diff1] += 1;
            }
            else
            {
                if (diff1 > 0)
                    m[diff1] += 1;
                if (diff2 > 0)
                    m[diff2] += 1;
            }
        }
        for (auto i : m){
            if (i.second == n - 1){
                cout << i.first << endl;
                break;
            }
        }
    }
	return 0;
}