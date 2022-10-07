#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,d,h;
	    cin>>n>>d>>h;
	    int a[n];
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    int wl=0;
	    string ans="NO";
	    for(int i=0;i<n;i++){
	        if(a[i]>0){
	            wl+=a[i];
	        }
	        
	        if(a[i]==0 && wl>0){
	            if(wl<d){
	                wl=0;
	            }
	            else{
	                wl-=d;   
	            }
	        }
	        
	        if(wl>h){
	            ans="YES";
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
