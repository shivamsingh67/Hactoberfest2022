//Ramnit here
#include<bits/stdc++.h>
using namespace std;

typedef long long lolo;
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define all(v) v.begin,v.end()
#define puba push_back
// #define F .first
// #define S .second

int main() {
	faster;
	int t;
    cin>>t;

    while(t--){
        lolo n;
        cin>>n;
        // vector<lolo> a(n);
        // for(lolo i=1;i<=n;i++){
        //     a.puba(i);
        // }
        // set<lolo,greater<lolo>> st(a.begin(), a.end());
        lolo res=0;
        // while(st.size()>0){
        //     lolo x=*st.begin();
        //     lolo bits=log2(x)+1;
        //     lolo y=(1<<bits)-1;
        //     if(x^y){
        //         st.erase(x);
        //         st.erase(y^x);
        //         res+=y*2;
        //     }
        //     else st.erase(x);
        // }
        while(n>0){
            lolo m=n;
            lolo p=0,count=0;
            while(m){
                if(m%2==0) p+=(1LL<<count);
                m/=2;
                count++;
                if(m<=0) break;
            }
            lolo x=p;
            lolo y=n;
            if((y&(y+1))==0) y--;
            lolo value=((y*(y+1))/2)-((x*(x-1))/2);
            res+=(value*2);
            n=x-1;
        }
        
        cout<<res<<"\n";
    }
	return 0;
}