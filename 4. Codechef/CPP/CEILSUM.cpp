#include <iostream>
#include <algorithm>
#include<cmath>
#include <climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    double a,b;
	    cin>>a>>b;
	    int m=INT_MIN;

        if(a==b){
            cout<<"0"<<endl;
        }
        else if(a<b){
            double temp=ceil((b-(a+1))/2)+((a+1-a)/2);
            m=ceil(temp);
            cout<<m<<endl;
        }
        else{
            double temp=ceil((b-(b-1))/2)+(((b-1)-a)/2);
            m=ceil(temp);
            cout<<m<<endl;
        }

	    // for(int i=min(a,b);i<=max(a,b);i++){
	    //     double temp=ceil((b-i)/2)+((i-a)/2);
	    //     if(temp>m){
	    //         m=ceil(temp);
	    //     }
        //     // cout<<temp<<" "<<m<<endl;
	    // }
	   // cout<<m<<endl;
	}
	return 0;
}
