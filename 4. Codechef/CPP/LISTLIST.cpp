//Ramnit here
#include<bits/stdc++.h>
using namespace std;

// typedef long long lolo;
#define fasterDaddy ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define all(v) v.begin,v.end()
// #define puba push_back
// #define F .first
// #define S .second

int main(){
	fasterDaddy;
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];

        sort(a,a+n);
        // int countM=1,count=1,dist=0;
        // for (int i=1;i<n;i++){
        //     if (a[i] == a[i - 1])
        //         count++;
        //     else{
        //         countM = max(count,countM);
        //         count = 1;
        //         dist++;
        //     }
        // }
        
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) mp[a[i]]++;
        
        int countM=1;
        for(auto i : mp) countM=max(countM,i.second); 
        
        // cout<<countM<<"count\n";
        // int ans=n-countM;
        
        if(n==1 || n==countM) cout<<"0\n";
        else if(countM==1) cout<<"-1\n";
        else cout<<n-countM+1<<"\n";
        
        // else if(n==2){
        //     if(countM!=1) cout<<"0\n";
        //     else cout<<"-1\n";
        // } 
        // else {
        //     if(countM==1) cout<<"-1\n";
        //     else if(countM==2) cout<<n-1<<"\n";
        //     else if(countM>2 && dist!=0) cout<<(n-countM)+1<<"\n";
        //     else if(dist==0) cout<<"0\n";
        // }
        
        // cout<<(n-countM)+1<<"\n";
    }
	return 0;
}