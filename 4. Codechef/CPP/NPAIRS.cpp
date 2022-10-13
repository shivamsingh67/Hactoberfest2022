//Ramnit here baby
#include<bits/stdc++.h>
using namespace std;

// typedef long long lolo;
#define fasterDaddy ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define all(v) v.begin,v.end()
// #define puba push_back
// #define F .first
// #define S .second

int main() {
	fasterDaddy;
	int t;
    cin>>t;

    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        // int count=0;
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         int temp1=(int)(s[j]);
        //         int temp2=(int)(s[i]);
        //         if(j-i==abs(temp1-temp2)) count++;
        //     }
        // }
        // cout<<count<<"\n";
        
        map<int,int> a,b;
        
        for(int i=0;i<n;i++){
            a[i-(int)s[i]]++;
            b[i+(int)s[i]]++;
        }
        
        int count=0;
        for(auto i=a.begin();i!=a.end();i++)
            count+=((i->second)*(i->second-1))/2;
            
        for(auto i=b.begin();i!=b.end();i++)
            count+=((i->second)*(i->second-1))/2;
            
        cout<<count<<"\n";
    }
	return 0;
}