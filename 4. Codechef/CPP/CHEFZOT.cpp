//ramnit_code_27
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int count=0,maxCount=0;
	for(int i=0;i<n;i++){
	    if(a[i]==0) count=0;
	    else count++;
	    maxCount=max(count,maxCount);
	}
	cout<<maxCount<<"\n";
	return 0;
}
