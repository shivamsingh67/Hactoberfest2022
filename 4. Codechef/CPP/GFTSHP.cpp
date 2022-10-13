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
        int n,k;
        cin>>n>>k;
        vector<int> cost(n);
        for(int i=0;i<n;i++) cin>>cost[i];
        // int total=accumulate(cost.begin(), cost.end(), 0);
        sort(cost.begin(),cost.end());
        int count=0;
        
        // if(total<=k) {
        //     cout<<n<<"\n";
        // }
        
        int ptr2=0,s=0;
        while(ptr2<n && (s+cost[ptr2])<=k){
            count++;
            s+=cost[ptr2];
            ptr2++;
            
        }
        if(ptr2<n && s+(cost[ptr2]+1)/2 <= k) count++;
        cout<<count<<"\n";
        
        // else{
        //     for(int i=0;i<n;i++){
        //         if(round(cost[i]/2)>k) 
        //             break;
        //         else {
        //             count++;
        //             k-=cost[i];
        //         }
        //     }
        //     cout<<count<<"\n";
        // }
        
    }
	return 0;
}