//Ramnit here
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
        int n,m;
        cin>>n>>m;
        bool a[n];
        for(int i=0;i<n;i++){
            a[i]=false;
        }
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            a[x-1]=true;
        }
        int cheff[n-m],ast[n-m];
        int c1=0,a1=0;
        for(int i=0;i<n;i++){
            if(a[i]==false){
                if(c1<=a1){
                    cheff[c1]=i+1;
                    c1++;
                }
                else{
                    ast[a1]=i+1;
                    a1++;
                }
            }
        }
        if(cheff[0]==0) cout<<" \n";
        else{
            for(int i=0;i<c1;i++){
                cout<<cheff[i]<< " ";
            }
            cout<<"\n";
        }
        if(ast[0]==0) cout<<" \n";
        else{
            for(int i=0;i<a1;i++){
                cout<<ast[i]<< " ";
            }
            cout<<"\n";
        }
    }
	return 0;
}