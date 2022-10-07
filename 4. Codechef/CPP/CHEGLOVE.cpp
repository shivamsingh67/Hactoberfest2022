//ramnit_code_27
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int f[n],g[n];
	    for(int i=0;i<n;i++) cin>>f[i];
	    for(int i=0;i<n;i++) cin>>g[i];
	    bool front=true,back=true;
	    for(int i=0;i<n;i++){
	        if(f[i]>g[i]){
	            front=false;
	            break;
	        }
	    }
	    int j=n-1;
	    for(int i=0;i<n;i++){
	        if(f[j]>g[i]){
	            back=false;
	            break;
	        }
	        j--;
	    }
	    if(front && back) cout<<"both\n";
	    else if(front) cout<<"front\n";
	    else if(back) cout<<"back\n";
	    else cout<<"none\n";
	}
	return 0;
}
