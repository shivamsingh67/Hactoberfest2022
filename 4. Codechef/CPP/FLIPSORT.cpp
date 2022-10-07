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
        vector<pair<int,int>> ans;
        for(int i=n-1;i>=0;i--){
            if(s[i]!='1'){
                int idx=i+1;
                for(int j=0;j<=i;j++){
                    if(s[j]!='0') s[j]='0';
                    else s[j]='1';
                }
                ans.push_back(make_pair(1,idx));
            }
        }
        cout<<ans.size()<<"\n";
        for(int i=0;i<ans.size();i++) cout<<ans[i].first<<" "<<ans[i].second<<"\n";
    }
	return 0;
}