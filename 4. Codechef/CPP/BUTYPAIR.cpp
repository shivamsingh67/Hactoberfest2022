#include<bits/stdc++.h>
using namespace std;

// double l(double a,double b){
//     double ans;
//     ans=(a-b)/a;
//     return ans;
// }

// double r(double a,double b){
//     double ans;
//     ans=(a-b)/b;
//     return ans;
// }

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	   // double a[n];
	   // for(long long i=0;i<n;i++){
	   //     cin>>a[i];
	   // }
	    long long count=0;
	   // for(long i=0;i<n;i++){
	   //     for(long long j=0;j<n;j++){
	   //         if(j!=i){
	   //            // if(l(a[i],a[j])<r(a[i],a[j]))
	   //            if((a[i]-a[j])*(a[i]-a[j])>0)
	   //             count++;
	   //         }
	   //     }
	   // }
	   
	    vector<long long> a(n);
        for(long long i=0; i<n; i++){
            cin>>a[i];
        }
	    sort(a.begin(),a.end());
	    for(long long i=0;i<n;i++){
	        auto x=lower_bound(a.begin()+i+1,a.end(),a[i]+1);
	        long long y = x-a.begin();
            count+=(n-y);
	   }
	   
	    cout<<count+count<<endl;
	}
	return 0;
}
