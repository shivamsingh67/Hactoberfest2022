#include <iostream>
using namespace std;

int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
	    int n;
	    cin>>n;
	    int c[n];
	    int total=0,req;
	    req=(n*(n+1))/2;
	    for(int i=0;i<n;i++){
	        cin>>c[i];
	        total+=c[i];
	    }
	    if(total==req) cout<<"YES\n";
	    else cout<<"NO\n";
// 	}
	return 0;
}
