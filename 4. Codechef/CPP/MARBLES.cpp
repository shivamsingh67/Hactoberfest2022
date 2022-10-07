#include <bits/stdc++.h>
using namespace std;

long long nCr(int n, int k){
    if (k > n-k) 
        k = n-k;
    long long val = 1;
    for (int i = 0; i < k; i++) {
        val *= (n - i);
        val /= (i+1);
    }
    return val;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    cout<<nCr(n-1,k-1)<<"\n";
	}
	return 0;
}
