//Ramnit here baby
#include<bits/stdc++.h>
using namespace std;

typedef long long lolo;
#define fasterDaddy ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define puba push_back
#define F first
#define S second

bool compare(pair<lolo,lolo>&a,pair<lolo,lolo>&b){
    return a.S<b.S;
}

int main() {
	fasterDaddy;
	int t;
    cin>>t;

    while(t--){
        lolo n;
        cin>>n;
        vector<pair<lolo,lolo>> b;
        for(int i=0;i<n;i++){
            lolo temp;
            cin>>temp;
            b.puba(make_pair(temp,i));
        }
        sort(b.begin(),b.end());
        lolo a=0;
        for(lolo i=0;i<n;i++){
            if(b[i].F>a){
                b[i].F=a;
                a++;
            }
            else if(b[i].F==a) b[i].F=a;
        }
        sort(b.begin(),b.end(),compare);
        for(lolo i=0;i<n;i++)
            cout<<b[i].F<<" ";
        cout<<"\n";
    }
	return 0;
}