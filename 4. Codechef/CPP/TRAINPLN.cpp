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
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        vector<vector<int>> xs(n);
        for(int i=0;i<n;i++) xs[b[i]].push_back(a[i]);
        vector<double> d(n+1,0);
        multiset<int> st;
        for(int i=1;i<n+1;i++){
            for(auto &j: xs[i-1])
                st.insert(j);
            if(st.size()){
                d[i]=d[i-1];
                auto itr=st.end();;
                itr--;
                d[i]+=*itr;
                st.erase(itr);
            }
            else break;
        }
        for(int i=1;i<n+1;i++) d[i]/=i;
        double resl=*max_element(d.begin(),d.end());
        cout<<fixed<<setprecision(6)<<resl<<"\n";
    }
	return 0;
}