#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<long long> a(n);
	    long long sum=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        sum+=a[i];
	    }
	    
	    sort(a.begin(),a.end());
	    long long kidWt=0;
	    for(int i=0;i<k;i++){
	        if(k<=n/2) kidWt+=a[i];
	        else kidWt+=a[n-1-i];
	    }
	    cout<<abs(sum-(2*kidWt))<<"\n";
	}
	return 0;
}