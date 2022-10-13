#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,p,k;
	    cin>>n>>p>>k;
	    
	    int days=(p/k)+(p%k)*(n/k);
	    
	    if((p%k)<(n%k))
	        days+=p%k;
	        
	    else
	        days+=n%k;
	        
	    cout<<days+1<<endl;
	}
	return 0;
}
