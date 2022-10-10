#include<bits/stdc++.h>
#define int int64_t
using namespace std;
int BinaryToNumber(vector<int>num)
{
    int ans=0;
    for (int i = 0; i < 32; i++)
    {
        ans+=pow(2,0)*num[i];
    }
    return ans;
}
int rangeBitwiseAnd(int left, int right) {

    vector<int>v;
    for (int i = left; i < right+1; i++){
        v.push_back(i);
    }
    vector<int>num;
    for (int i = 0; i < 32; i++){
        int x=(1<<i);
        int ans=v[0]&x;
        for (int j = 1; j < right-left+1; j++)
        {
            ans=(v[j]&ans);
        }
        num.push_back(ans);   
    }
    return BinaryToNumber(num);
    
}
int32_t main()
{
    int left=5,right=7;
    cout<<rangeBitwiseAnd(left,right);
    return 0;
}