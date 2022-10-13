#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int medal[6];
	    int one=0,two=0;
	    for(int i=0;i<6;i++){
	        cin>>medal[i];
	        if(i<3){
	            one+=medal[i];
	        }
	        else{
	            two+=medal[i];
	        }
	    }
	    (one>two)?cout<<"1"<<endl:cout<<"2"<<endl;
	}
	return 0;
}
