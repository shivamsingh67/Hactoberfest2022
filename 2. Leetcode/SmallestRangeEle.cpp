#include <bits/stdc++.h>
#define int int64_t
using namespace std;

vector<int> smallestRange(vector<vector<int>> nums)
{
    map<int, int> a;
    vector<pair<int, int>> b;
    for (int i = 0; i < nums.size(); i++)
    {
        b.push_back({nums[i][0], i});
    }
    sort(b.begin(), b.end());
    int ans = b[nums.size() - 1].first - b[0].first + 1;

    vector<int> out;
    int c= b[0].first,d=b[nums.size() - 1].first;
    while (1)
    {
        sort(b.begin(),b.end());
        if (a[b[0].second] == nums[b[0].second].size() - 1)
        {
            out.push_back(c);
            out.push_back(d);
            break;
        }
        b[0].first = nums[b[0].second][a[b[0].second] + 1];
        a[b[0].second]++;
        int prev=ans;
        ans = min(ans, b[nums.size() - 1].first - b[0].first + 1);
        if(prev!=ans){
            c= b[0].first;d=b[nums.size() - 1].first;
        }
    }
    return out;
}
int32_t main()
{
    vector<vector<int>> nums(3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int x;
            cin >> x;
            nums[i].push_back(x);
        }
    }
    vector<int> ans = smallestRange(nums);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}