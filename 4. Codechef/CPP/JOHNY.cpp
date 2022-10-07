#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,i;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    int k;
	    cin>>k;
	    k=a[k-1];
	    sort(a,a+n);
	   // int ans=0;
	    for(i=0;i<n;i++){
	        if(a[i]==k){
	           // ans=i+1;
	            break;
	        } 
	    }
	    cout<<i+1<<"\n";
	}
	return 0;
}
