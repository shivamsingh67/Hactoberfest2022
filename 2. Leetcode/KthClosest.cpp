#include<bits/stdc++.h>
#define int int64_t
using namespace std;

vector<int> findClosestElements(vector<int> arr, int k, int x) 
{
    vector<pair<int,int> >ab;
    vector<int>ans;
    for(auto it: arr){
        // ab.push_back({abs(it-x),it});
        ab.push_back(make_pair(abs(it-x),it));
    }
    sort(ab.begin(),ab.end());
    for(int i=0;i<k;i++){
        ans.push_back(ab[i].second);
    }
    sort(ans.begin(),ans.end());
    return ans;
 
}
int32_t main()
{
    vector<int> arr{-2, -4, 1, 4, 7};
    int k=3,x=1;
    findClosestElements(arr,k,x);
    vector<int>a=findClosestElements(arr,k,x);
    for(auto x: a)
    {
        cout<<x<<",";
    }
    return 0;
}