//Ramnit here baby
#include<bits/stdc++.h>
using namespace std;

typedef long long lolo;
#define fasterDaddy ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define all(v) v.begin,v.end()
// #define puba push_back
// #define F .first
// #define S .second

int main() {
	fasterDaddy;
	lolo t;
    cin>>t;

    while(t--){
        lolo n, k;
        cin >> n >> k;
        lolo arr[n];
        set<lolo> s1;
        for (lolo j = 0; j < n; j++)
        {
            cin >> arr[j];
            if (arr[j] > 0)
            {
                s1.insert(j);
            }
        }
        if (s1.size() == 0)
        {
            cout << "0\n";
        }
        else
        {
            lolo arr1[n];
            lolo ans = 0, tmax = 0;
            for (lolo j = 0; j < n; j++)
            {
                if (arr[j] == 0)
                {
                    auto it = s1.lower_bound(j);
                    if (it == s1.begin() || it == s1.end())
                    {
                        lolo x = *s1.begin();
                        lolo y = *s1.rbegin();

                        x = min(abs(x - j), min(n - j + x, n - x + j));

                        y = min(abs(y - j), min(n - j + y, n - y + j));
                        arr1[j] = min(x, y);
                    }
                    else
                    {
                        lolo x = *it;
                        it--;
                        lolo y = *it;
                        arr1[j] = min(abs(j - x), abs(j - y));
                    }
                }
                else
                {
                    arr1[j] = 0;
                }
                tmax = min(k, max(tmax, arr1[j]));
            }
            lolo z = k - tmax;
            ans += (z * 2 * n);
            for (lolo j = 0; j < n; j++)
            {

                if (j == 0)
                {
                    if (arr1[j + 1] < tmax)
                        ans += abs(tmax - arr1[j + 1]);
                    if (arr1[n - 1] < tmax)
                        ans += abs(tmax - arr1[n - 1]);
                }
                else if (j == n - 1)
                {
                    if (arr1[0] < tmax)
                        ans += abs(tmax - arr1[0]);
                    if (arr1[j - 1] < tmax)
                        ans += abs(tmax - arr1[j - 1]);
                }
                else
                {
                    if (arr1[j - 1] < tmax)
                        ans += abs(tmax - arr1[j - 1]);
                    if (arr1[j + 1] < tmax)
                        ans += abs(tmax - arr1[j + 1]);
                }
                ans += arr[j];
            }
            cout << ans << endl;
        }
    }
	return 0;
}