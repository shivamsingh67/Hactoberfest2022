#include <iostream>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	bool a[n]={false};
	int count=0;
	while(k--){
	    string s;
	    cin>>s;
	    if(s=="CLICK"){
	        int x;
	        cin>>x;
	        if(a[x-1]==true){
	            a[x-1]=false;
	            count--;
	            cout<<count<<"\n";
	        }
	        else{
	            a[x-1]=true;
	            count++;
	            cout<<count<<"\n";
	        }
	    }
	    else {
	        for(int i=0;i<n;i++){
	            a[i]=false;
	        }
	        count=0;
	        cout<<count<<"\n";
	    }
	}
	return 0;
}
