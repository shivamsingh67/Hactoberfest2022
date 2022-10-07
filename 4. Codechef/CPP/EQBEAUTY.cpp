//Ramnit here
#include<bits/stdc++.h>
using namespace std;

typedef long long lolo;
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
        lolo a[n];
        lolo beauty1=0,beauty2=0,mini=INT_MAX;
        
        for(int i=0;i<n;i++){
            cin>>a[i];
            // mini=min(mini,a[i]);
            // maxi=max(maxi,a[i]);
        }
        sort(a,a+n);
        // beauty=a[n-1]-a[0];
        
        if(n==2){
            cout<<0<<"\n";
            continue;
        }
        else if(n==3){
            cout<<min(a[1]-a[0],a[2]-a[1])<<"\n";
            continue;
        }
        
        for(int i=0;i<n-1;i++){
            beauty1+=abs(a[i]-a[(n-1)/2]);
        }
        for(int i=1;i<n;i++){
            beauty2+=abs(a[i]-a[((n-1)/2)+1]);
        }
        
        mini=min(beauty1,beauty2);
        int start=1,end=n-2;
        lolo diff1,diff2;
        
        while(start<end){
            diff1=a[end]-a[0];
            diff2=a[n-1]-a[start];
            mini=min(mini,abs(diff2-diff1));
            if(diff1>=diff2) end--;
            else start++;
        }
        
        cout<<mini<<"\n";
    }
	return 0;
}