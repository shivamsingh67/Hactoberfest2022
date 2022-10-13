//Ramnit here
#include<bits/stdc++.h>
using namespace std;

// typedef long long lolo;
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define all(v) v.begin,v.end()
#define puba push_back
#define F first
#define S second

bool cmp(pair<char,int>& a, pair<char,int>& b){
    return a.second < b.second;
}

void sort(map<char,int>& m){
    vector<pair<char,int>> v;
    for (auto& i:m) {
        v.push_back(i);
    }
    sort(v.begin(), v.end(), cmp);
    // sort(v.begin(), v.end());
    // for(auto& i:m) {
    //     cout<<i.first<<' '<<i.second<<'\n';
    // }
}

int main() {
	faster;
	int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        // bool flag1=false;
        // for(int i=0;i<n;i++){
        //     if(count(s.begin(),s.end(),s[i])>n/2){
        //         flag1=true;
        //         break;
        //     }
        // }
        // bool flag2=true;
        // for(int i=0;i<n;i++){
        //     if(count(s.begin(),s.end(),s[i])>=2){
        //         flag2=false;
        //         break;
        //     }
        // }
        // if(flag1 || flag2){
        //     cout<<"NO\n";
        // }
        if(n%2!=0) cout<<"NO\n";
        else{
            // cout<<"YES\n";
            map<char,int> mp;
            
            vector<pair<int,char>> vt;
            for(int i=0;i<n;i++) mp[s[i]]++;
            for(auto i: mp) vt.puba(make_pair(i.S,i.F));
            
            sort(vt.begin(),vt.end());
            string ans="";
            int a;
            bool flag=1;
            for(int i=0;i<vt.size();i++){
                a=vt[i].F;
                if(a>(n/2)){
                    flag=0;
                }
                for(int j=0;j<a;j++) ans+=vt[i].second;
            }
            if(flag==0) {
                cout<<"NO\n";
                continue;
            }
            int j=n/2;
            int i=0;
            j--;
            char ch;
            while(i<j){
                ch=ans[i];
                ans[i]=ans[j];
                ans[j]=ch;
                i++;
                j--;
            }
            cout<<"YES\n"<<ans<<"\n";
            
            // for (int i=0;s[i];i++){
            //     if (m.find(s[i])==m.end()) m.insert(make_pair(s[i],1));
            //     else m[s[i]]++;
            // }
            
            // sort(m);
            // for (auto& i:m) {
            //     for(int j=0;j<i.second;j++) cout<<i.first;
            // }
            // cout<<"\n";
        }
    }
	return 0;
}