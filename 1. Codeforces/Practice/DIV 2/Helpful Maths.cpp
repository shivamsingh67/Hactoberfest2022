#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    vector<int> ans;
    for(int i=0;i<s.length();i++){
        if(s[i]!='+') ans.push_back(s[i]-48);
    }
    sort(ans.begin(),ans.end());
    if(ans.size()==1) cout << ans[0];
    else{
        cout << ans[0];
        for(int i=1;i<ans.size();i++){
            cout <<  "+" << ans[i];
        }
    }
    return 0;
}
