#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    float x,y;
	    cin>>x>>y;
	    float result=0;
	    if(x+y>=6){
	        cout<<result<<endl;
	    }
	    else{
	        result=(6-(x+y))/6;
	        cout<<result<<endl;
	    }
	}
	return 0;
}
