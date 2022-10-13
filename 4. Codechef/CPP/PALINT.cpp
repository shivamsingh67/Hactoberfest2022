//Ramnit here baby
#include <bits/stdc++.h>
using namespace std;

// typedef long long lolo;
#define fasterDaddy                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
// #define all(v) v.begin,v.end()
// #define puba push_back
// #define F .first
// #define S .second

int main()
{
    fasterDaddy;
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int p;
        // int a[n];
        // for(int i=0;i<n;i++)
        //     cin>>a[i];
        unordered_map<int, int> mp;
        unordered_map<int, int> exist;
        for (int i = 0; i < n; i++)
        {
            cin >> p;
            mp[p]++;
            exist[p] = 1;
        }
        if (n == 1)
        {
            cout << 1 << " " << 0 << endl;
            continue;
        }
        int eq_int = 0;
        int operation = 0;
        for (auto it : mp)
        {
            if (it.second == n)
            {
                eq_int = n;
                break;
            }
            if (it.second >= eq_int)
            {
                eq_int = it.second;
            }
        }
        if (x == 0)
        {
            cout << eq_int << " " << operation << endl;
            continue;
        }
        for (auto it : mp)
        {
            if (exist[(it.first) ^ x] == 1)
            {
                if (it.second + mp[(it.first) ^ x] > eq_int)
                {
                    eq_int = it.second + mp[(it.first) ^ x];
                    operation = min(it.second, mp[(it.first) ^ x]);
                }
                else if (it.second + mp[(it.first) ^ x] == eq_int)
                {
                    if (min(it.second, mp[(it.first) ^ x]) < operation)
                    {
                        operation = min(it.second, mp[(it.first) ^ x]);
                    }
                }
            }
        }
        cout << eq_int << " " << operation << endl;
    }
    return 0;
}