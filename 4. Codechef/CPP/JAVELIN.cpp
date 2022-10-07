#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
    cin>>t;

    while(t--){
        int n,m,x;
        cin>>n>>m>>x;
        
        vector< pair <int,int> > a(n);
        for(int i=0;i<n;i++){
            cin>>a[i].first;
            a[i].second=i+1;
        }
        
        int k=0;
        
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(a[i].first>=m){
                a[i].first=-1;
                ans.push_back(a[i].second);
                k++;                
            }
        }

        sort(a.rbegin(), a.rend());
        
        for(int i=0;k<x;i++){
            ans.push_back(a[i].second);
            k++;
        }
        
        cout<<k<<" ";
        sort(ans.begin(),ans.end());
        for(int i=0;i<k;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
	return 0;
}
