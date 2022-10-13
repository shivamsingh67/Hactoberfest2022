//ramnit_code_27
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int count=0;
	    int len=s.length();
	    for(int i=0;i<len;i++){
	        if(s[i-1]=='1' || s[i]=='1' || s[i+1]=='1'){
	            count++;
	        }
	    }
	    cout<<(n-count)<<"\n";
	}
	return 0;
}