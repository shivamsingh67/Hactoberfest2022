//Ramnit here
#include<bits/stdc++.h>
using namespace std;

// typedef long long lolo;
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define all(v) v.begin,v.end()
// #define puba push_back
// #define F .first
// #define S .second

int main() {
	faster;
	int t;
    cin>>t;

    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int zero=count(s.begin(),s.end(),'0'), one=count(s.begin(),s.end(),'1');
        // cout<<s<<"\n";
        bool op=false,ep=false;
        int op1=0,op0=0,ep1=0,ep0=0;
        for(int i=0;i<n;i++){
            // cout<<s[i]<<" ";
            if(i%2==0) {
                if(s[i]=='1') ep1++;
                else ep0++;
            }
            else {
                if(s[i]=='1') op1++;
                else op0++;
            }
        }
        // cout<<zero<<" "<<one<<"\n";
        // cout<<op0<<" "<<op1<<" "<<ep0<<" "<<ep1<<" ";
        
        int res=0;
        if(n&1) n--;
        // cout<<n<<"\n";
        for(int i=0;i<n-1;i+=2){
            if(s[i]=='0' && s[i+1]=='1') {}
            else op=true;
            if(s[i]=='1' && s[i+1]=='0') {}
            else ep=true;
        }
        // cout<<op<<" "<<ep<<"\n";
        
        if(!op){
            cout<<n/2<<"\n";
            continue;
        }
        else if(!ep && s[n]=='1'){
            cout<<n/2<<"\n";
            continue;
        }
        
        if(one==zero) res=one-1;
        else if(one<zero) res=one;
        else res=zero;
        
        cout<<res<<"\n";
        
        // cout<<"\n"<<ep<<" "<<op<<"\n";
        // if(n%2!=0) {
        //     op1=op;
        //     ep1=ep;
        //     ep0=n/2-ep+1;
        //     op0=n/2-op;
        // }
        // else{
        //     op1=op;
        //     ep1=ep;
        //     ep0=n/2-ep;
        //     op0=n/2-op;
        // }
        // cout<<op<<" "<<ep<<" "<<ep0<<" "<<ep1<<" "<<op0<<" "<<op1<<"\n";
        // cout<<min(max(op1,ep0),max(op0,ep1))<<"\n";
    }
	return 0;
}