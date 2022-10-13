#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
long long lcm(long long a, long long b){
    return (a / gcd(a, b)) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	long t;
    cin>>t;

    while(t--){
        long long n,m;
        cin>>n>>m;
        // long long a[n]={0};
        
        vector< pair <long long,long long> > S;
        
        for(long long i=0;i<m;i++) {
            long long x, y;
            cin>>x>>y;
            S.push_back( make_pair(x,y) );
        }
        
        sort(S.rbegin(), S.rend());
        
        long long temp=1,sum=0,rest;
        
        for(long long i=0;i<m;i++) {
            rest=n/temp;
            temp=lcm(temp,S[i].second);
            sum=sum+(rest*S[i].first)-(S[i].first*(n/temp));
        }

        cout<<sum<<"\n";
    }
	return 0;
}