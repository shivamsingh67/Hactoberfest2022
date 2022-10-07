//ramnit_code_27
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int count=0;
	while(t--){
	    int x1,x2,x3,x4,x5,x6;
	    cin>>x1>>x2>>x3>>x4>>x5>>x6;
	    int a=(x3-x1)*(x3-x1) + (x4-x2)*(x4-x2);
	    int b=(x5-x3)*(x5-x3) + (x6-x4)*(x6-x4);
	    int c=(x1-x5)*(x1-x5) + (x2-x6)*(x2-x6);
	    
	    if(a==b+c || b==a+c || c==a+b) count++;
	}
	cout<<count<<"\n";
	return 0;
}
