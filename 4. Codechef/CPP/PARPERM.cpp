//Ramnit here baby
#include<bits/stdc++.h>
using namespace std;

typedef long long lolo;
#define fasterDaddy ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define all(v) v.begin,v.end()
#define puba push_back
// #define F .first
// #define S .second
#define show(v) for(int i=0; i<(int)v.size(); ++i) cout<<v[i]<<" "

const lolo max_size = 1e5 + 5;
bool prime[max_size];

void prime_seive(lolo n){
    memset(prime, true, sizeof(prime));
    for (lolo i = 2; i * i <= n; i++){
        if (prime[i]){
            for (lolo j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }
}

int main(){
    fasterDaddy;
    prime_seive(max_size);
    lolo t;
    cin >> t;
    while (t--){
        lolo n, k;
        cin >> n >> k;

        if (k == 1 || n == 2){
            cout << "YES" << "\n";
            cout << 1 << "\n";
            continue;
        }

        if (n == 3){
            cout << "YES" << "\n";
            cout << 1 << " " << 2 << "\n";
            continue;
        }

        vector<lolo> dp;
        for (lolo i = 2; i <= n; i++){
            if (prime[i])
                dp.puba(i);
        }

        lolo i = 0;
        vector<lolo> B;
        B.puba(2);
        for (i = 1; i < dp.size(); i++){
            lolo val = (2 * dp[i]);
            if (val <= n){
                B.puba(dp[i]);
                continue;
            }
            else
                break;
        }

        lolo rem = dp.size() - i;

        vector<lolo> v1, v2;
        set<lolo> s;
        
        for (lolo j = i; j < dp.size(); j++){
            v2.puba(dp[j]);
            s.insert(dp[j]);
        }

        for (lolo i = 2; i <= n; i++){
            if (s.find(i) == s.end()){
                v1.puba(i);
            }
        }

        if (k >= v1.size()){
            cout << "YES" << "\n";
            show(v1);
            k -= v1.size();
            
            while (k > 0){
                cout << v2.back() << " ";
                v2.pop_back();
                k--;
            }
            cout << "\n";
            continue;
        }

        if (k <= v2.size() + 1){
            cout << "YES" << "\n";
            cout << 1 << " ";
            k--;
            
            while (k > 0){
                cout << v2.back() << " ";
                v2.pop_back();
                k--;
            }
            cout << "\n";
            continue;
        }

        else
            cout << "NO" << "\n";
        
        continue;
    }
    return 0;
}