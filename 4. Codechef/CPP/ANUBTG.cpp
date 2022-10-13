//ramnit_code_27
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int c[n];
	    for(int i=0;i<n;i++) cin>>c[i];
	    if(n==1){
	        cout<<c[0]<<"\n";
	        continue;
	    }
	    sort(c,c+n,greater<int>());
	    int total=0;
	    for(int i=0;i<n;i++){
	        if(i % 4 < 2) 
	            total += c[i];
	    }
	    cout<<total<<"\n";
	}
	return 0;
}
