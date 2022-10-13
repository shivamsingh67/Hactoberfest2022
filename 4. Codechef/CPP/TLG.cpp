#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int n,m=0,a=0,b=0,w;
	cin>>n;
	while(n--){
	    int x,y;
	    cin>>x>>y;
	    a+=x;
	    b+=y;
	    if(a<b){
	        if(max(m,b-a)>m) w=2;
	        m=max(m,b-a);
	    }
	    else{
	        if(max(m,a-b)>m) w=1;
	        m=max(m,a-b);
	    }
	}
	cout<<w<<" "<<m;
	return 0;
}
