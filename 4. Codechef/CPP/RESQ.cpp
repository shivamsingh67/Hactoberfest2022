#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int minDiff=INT_MAX;
	    for(int i=1;i*i<=n;i++){
	        if(n%i==0)
	            minDiff=min(minDiff,abs(i-(n/i)));
	    }
	    cout<<minDiff<<"\n";
	}
	return 0;
}
