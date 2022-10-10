#include <bits/stdc++.h>
#define int int64_t
using namespace std;
int hammingDistance(int x, int y)
{
    int count=0;
    while (x > 0 || y>0)
    {
        int last_bitx = (x & 1);
        int last_bity = (y & 1);
        cout<<last_bitx<<","<<last_bity<<endl;
        if (last_bitx != last_bity)
        {
            count += 1;
        }
        x = (x >> 1);
        y = (y >> 1);
    }
    return count;
}

int32_t main()
{
    int x, y;
    cin>>x>>y;
    cout << hammingDistance(x, y);
    return 0;
}