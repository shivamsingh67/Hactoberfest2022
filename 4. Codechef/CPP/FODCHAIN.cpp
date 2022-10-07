#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int e,k;
	    cin>>e>>k;
	    int count=1;
	    while(1>0){
	        e=e/k;
	        if(e>=1){
	            count++;
	        }
	        else{
	            cout<<count<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
