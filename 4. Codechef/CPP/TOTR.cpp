//ramnit_code_27
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	string m;
	cin>>t>>m;
	while(t--){
	    string s;
	    cin>>s;
	    for(int i = 0; i < s.length(); i++){
	        if(s[i]>=65 && s[i]<=90){
	            s[i]=m[s[i]-'A'];
	            s[i]^=32;
	        }
	        else if(s[i]>=97 && s[i]<=122){
	            s[i]=m[s[i]-'a'];
	        }
	        else if(s[i]=='_') 
	            s[i]=' ';
	    }
	    cout<<s<<"\n";
	}
	return 0;
}