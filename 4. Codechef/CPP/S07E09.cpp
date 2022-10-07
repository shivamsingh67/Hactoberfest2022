// Ramnit here
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fasterDaddy                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define all(a) (a).begin(), (a).end()
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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(all(a));
        ll ans = a[0] * n;
        ll pos = n;
        ll c = a[0];
        for (ll i = 0; i < n; i++)
        {
            a[i] -= c;
            if (a[i] > 0)
            {
                pos = i;
                break;
            }
        }
        ans += (n - pos);
        cout << ans << "\n";
    }
    return 0;
}