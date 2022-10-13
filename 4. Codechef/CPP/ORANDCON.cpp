//Ramnit here
#include<bits/stdc++.h>
using namespace std;

typedef long long lolo;
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
        int x,a,b,c;
        cin>>x;
        a=x;
        b=0;
        c=a;
        for(int i=0;i<31;i++){
            if(!(c & (1<<i))){
                c=c | (1<<i);
                break;
            }
        }
        cout<<a<<" "<<b<<" "<<c<<"\n";
    }
	return 0;
}