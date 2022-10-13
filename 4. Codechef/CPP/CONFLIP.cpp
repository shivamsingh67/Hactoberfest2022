#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int g;
	    cin>>g;
	    while(g--){
	        int i, n ,q;
	        cin>>i>>n>>q;
	       if(i==q) cout<<n/2<<"\n";
	       else cout<<n-n/2<<"\n";
	    }
	}
	return 0;
}
