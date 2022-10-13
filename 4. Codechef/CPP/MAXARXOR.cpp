#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    
	    long shift,sum,temp;
	    shift=pow(2,n-1);
	    temp=pow(2,n)-1;
	    if(k>shift){
	        sum=2*shift*temp;
	    }
	    else{
	        sum=2*k*temp;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
