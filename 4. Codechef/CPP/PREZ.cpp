//Ramnit here
#include<bits/stdc++.h>
using namespace std;

// typedef long long lolo;
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define all(v) v.begin,v.end()
#define puba push_back
// #define F .first
// #define S .second

int main() {
	faster;
	int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        string r="";
        for(int i=0;i<s.size();++i) r+=(58-s[i])%10+48;
        int sum=0,pv;
        pv=(r[0]-48)%10;
        sum+=pv;
        vector<int> t;
        for(int i=1;i<r.size();i++){
            t.puba(sum);
            if(k<0) break;
            int cr=(r[i]-48)%10;
            if(cr>pv) sum+=10;
            pv=cr;
        }
        t.puba(sum);
        int i=0;
        for(auto &x:t){
            if(x>k) break;
            i++;
        }
        cout<<i<<"\n";
    }
	return 0;
}