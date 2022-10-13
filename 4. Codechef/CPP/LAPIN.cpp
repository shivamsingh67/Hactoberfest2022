//ramnit_code_27
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n=s.size();
	    string s1,s2;
	   // if(n%2==0){
	   //     s1=s.substr(0,(n/2)-1);
	   //     s2=s.substr(n/2,n-1);
	   // }
	   // else{
	   //     s1=s.substr(0,(n/2)-1);
	   //     s2=s.substr((n/2)+1,n-1);
	   // }
	   s1=s.substr(0,(n/2));
	   s2=s.substr((n/2)+(n%2),n-1);
    //    cout<<s1<<"  "<<s2<<"\n";
	   sort(s1.begin(),s1.end());
	   sort(s2.begin(),s2.end());
    //    cout<<s1<<"  "<<s2<<"\n";
	   if(s1==s2) cout<<"YES\n";
	   else cout<<"NO\n";
	}
	return 0;
}
