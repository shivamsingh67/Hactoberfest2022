//Ramnit here baby
#include<bits/stdc++.h>
using namespace std;

typedef long long lolo;
#define fasterDaddy ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define all(v) v.begin,v.end()
#define puba push_back
#define F first
#define S second

int main() {
	fasterDaddy;
	int t;
    cin>>t;

    while(t--){
        lolo n,m;
        cin>>n>>m;
        vector<pair<lolo, string>> v;
        for(lolo i=0;i<n;i++){
            string s;
            cin>>s;
            lolo count = 0;
            for (lolo j = 0; j < m; j++)
                if (s[j] == '0')
                    count++;
                    
            v.puba({-count, s});
        }
        
        sort(v.begin(),v.end());
        
        string a="";
        for (lolo i = 0; i < n; i++)
            a = a + v[i].S;
            
        lolo count = 0;
        for (lolo i = 0; i < n*m; i++)
            if (a[i] == '0')
                count++;
            
        lolo res = 0;
        for (lolo i = 0; i < n * m; i++){
            if (a[i] == '1')
                res += count;
                
            else count--;
        }

        cout<<res<<"\n";
    }
	return 0;
}