#include<bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> nums){
    vector<int>pref;
    pref.push_back(0);
    for(int i=0;i<nums.size();i++){
        int x=pref[i]+nums[i];
        pref.push_back(x%n);
    }
    int sum=0,k=0;
    sum+=count(pref.begin(),pref.end(),0)-1;
    for (int i = 1; i <pref.size()-1; i++)
    {
        for (int j = i+1; j < pref.size();j++)
        {
            int p=abs(pref[j]-pref[i]);
            if(p%n==0){
                k++;
            }
        }
    }
    return sum+k;
    
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<solve(n,v)<<endl;
    
}