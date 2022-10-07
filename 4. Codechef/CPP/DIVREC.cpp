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
        int x,a,b;
        cin>>x>>a>>b;
        if(x%a!=0) cout<<"-1\n";
        else{
            int m=x/a;
            int n=b*m;
            int total=0;
            for(int i=1;i<=sqrt(n);i++){
                if(total>x) break;
                if(n%i==0){
                    total+=i;
                    if(n/i!=i)
                    total+=n/i;
                }
            }
            if(total!=x) cout<<"-1\n";
            else cout<<n<<"\n";
        }
    }
	return 0;
}