#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int temp,rev=0;
	    temp=n;
	    while(temp>0){
	        rev=rev*10+temp%10;
	        temp/=10;
	    }
	    if(rev==n) cout<<"wins\n";
	    else cout<<"loses\n";
	}
	return 0;
}
