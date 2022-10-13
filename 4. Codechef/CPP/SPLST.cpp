//ramnit_code_27
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,x,y;
	    cin>>a>>b>>c>>x>>y;
	    if(a+b+c==x+y) {
	        if((a>x && b>x && c>x) || (a>y && b>y && c>y)) cout<<"NO\n";
	        else cout<<"YES\n";
	    }
	    else cout<<"NO\n";
	}
	return 0;
}
