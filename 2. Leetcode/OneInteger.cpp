#include<bits/stdc++.h>
#define int int64_t
using namespace std;
 #include<bits/stdc++.h>
using namespace std;

int solve(vector<int> nums) {
    multiset<int>cnt;
    int sum=0,k=0;
    for(int x: nums){
        cnt.insert(x);
    }
    while(cnt.size()!=1){
        int a=*(cnt.begin());
        int b=*(++cnt.begin());
        sum+=a+b;
        k+=a+b;
        cnt.erase(cnt.begin());
        cnt.erase((cnt.begin()++));
        cnt.insert(k);
        // cout<<k<<" ";
        k=0;
    }
    return sum;
    
}
int32_t main()
{
    vector<int>nums{1,2,3,4,5};
    cout<<solve(nums);
    return 0;
}