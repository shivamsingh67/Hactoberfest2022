//ramnit_code_27
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    int count=0;
	    for(int i=0;i<n;i++) cin>>a[i];
	    sort(a,a+n);
	   // for(int i=0;i<n;i++) cout<<a[i]<<" ";
	   // cout<<"\n";
	    for(int i=0;i<n;i++) { 
	        if(count>=a[i]) count++;
	       // count+=a[i];
	       // cout<<a[i]<<" ";
	    }
	   // cout<<"\n";
	    cout<<count<<"\n";
	}
	return 0;
}
