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
	    for(int i=0;i<n;i++) cin>>a[i];
	    sort(a,a+n);
	    bool possible=true;
	    for(int i=1;i<n;i++){
	        if(a[i]-a[i-1]>1){
	            possible=false;
	            break;
	        }
	    }
	    if(possible) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
