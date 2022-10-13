#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int trip=0;
	    for(int a=1;a<=n;a++){
	        for(int b=a;b<=n;b+=a){
	            if(b%a==0){
	                for(int c=a;c<=n;c+=b){
	                    if(c%b==a){
	                        trip++;
	                    }
	                }
	            }
	        }
	    }
	    cout<<trip<<"\n";
	}
	return 0;
}
