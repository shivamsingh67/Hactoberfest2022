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
        stack<int> s;
        int q;
        cin>>q;
        while(q--){
            int i;
            cin>>i;
            if(i==-1){
                if(!s.empty()) {
                    cout<<s.top()<<"\n";
                    s.pop();
                }
                else cout<<"kuchbhi?\n";
            }
            else if(i==1){
                int n;
                cin>>n;
                s.push(n);
            }
        }
	return 0;
}