//ramnit_code_27
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,a,b;
	    cin>>n>>a>>b;
	    int x[n];
	    double counta=0,countb=0;
	    for(int i=0;i<n;i++){
	        cin>>x[i];
	        if(x[i]==a) counta++;
	        if(x[i]==b) countb++;
	    }
	    counta/=n;
	    countb/=n;
	    cout<<counta*countb<<"\n";
	}
	return 0;
}
