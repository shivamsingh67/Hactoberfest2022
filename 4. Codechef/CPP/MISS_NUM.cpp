//Ramnit here
#include<bits/stdc++.h>
using namespace std;

// typedef long long lolo;
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define all(v) v.begin,v.end()
// #define puba push_back
// #define F .first
// #define S .second

vector <int> factors(int x) {
    vector <int> result;
    int i = 1;
    while(i*i <= x) {
        if(x % i == 0) {
            result.push_back(i);
            if(x/i != i) result.push_back(x/i);
        }
        i++;
    }
    return result;
}

int main() {
	faster;
	int t;
    cin>>t;

    while(t--){
        int val[4];
        // bool special=false;
        cin>>val[0]>>val[1]>>val[2]>>val[3];
        sort(val,val+4);
        
        // if(val[3]==val[2]+1) {
        //     if(val[3]!=6 && val[2]!=5){
        //         // if((val[1]==-4 || val[0]==-4)){
        //             swap(val[2],val[3]);
        //         // }
        //     }
        // }
        // if(val[3]==6 && val[2]==5){
        //     if((val[1]==-4 || val[0]==-4)){
        //         swap(val[2],val[3]);
        //     }
        // }
        
        // int a_b,a_b_n,a,b;
        
        // a_b=1.0*sqrt((val[2]*val[2])-(4*val[3]));
        // a_b_n=-a_b;
        //a=-1.0;
        //b=-1.0;
        
        // bool flag=false;
        
        // if(a_b-(int)a_b == 0){
        //     a=(a_b+val[2])/2.0;
        //     b=val[2]-a;
        //     flag=true;
        // }
        
        // if(a>b){
        //     a=(a_b_n+val[2])/2.0;
        //     b=val[2]-a;
        // }
        
        // int a,b,c,d;
        // a=(val[0]+val[2])/2;
        // b=val[2]-a;
        // c=(val[1]+val[2])/2;
        // d=val[2]-c;
        
        // bool flag=false;
        // if(a-(int)a==0 || c-(int)c==0){
        //     flag=true;
        // }
        // if(flag){
        //     if(((int)(a-b)==val[0] && (int)(a/b)==val[1]) || (int)((a-b)==val[1] && (int)(a/b)==val[0])){
        //         cout<<a<<" "<<b<<"\n";
        //     }
        //     else if(((int)(c-d)==val[0] && (int)(c/d)==val[1]) || (int)((c-d)==val[1] && (int)(c/d)==val[0])){
        //         cout<<c<<" "<<d<<"\n";
        //     }
        //     else{
        //         cout<<"-1 -1\n";
        //     }
        // }
        
        int a,b,c,d,e,f,g,h;
        a = (val[2] + val[0]) / 2;
        b = val[2] - a;
        c = (val[2] + val[1]) / 2;
        d = val[2] - c;
        e = (val[3] + val[0]) / 2;
        f = val[3] - e;                
        g = (val[3] + val[1]) / 2;
        h = val[3] - g;

        if ((a%1==0) && (a!=0) && (b%1==0) && (b!=0)){
            if ((a/b==val[1]) && (a*b==val[3]) && (a>=1) && (b>=1) && (a<=10000) && (b<=10000)){
                cout<<a<<" "<<b<<"\n";
                continue;
            }
        }
        if ((c%1==0) && (c!=0) && (d%1==0) && (d!=0)){
            if ((c/d==val[0]) && (c*d==val[3]) && (c>=1) && (d>=1) && (c <= 10000) && (d <= 10000)){
                cout<<c<<" "<<d<<"\n";
                continue;
            }
        }
        if ((e%1==0) && (e!=0) && (f%1==0) && (f!=0)){
            if ((e/f==val[1]) && (e*f==val[2]) && (e>=1) && (f>=1) && (e <= 10000) && (f <= 10000)){
                cout<<e<<" "<<f<<"\n";
                continue;
            }
        }
        if ((g%1==0) && (g!=0) && (h%1==0) && (h!=0)){
            if ((g/h==val[0]) && (g*h==val[2]) && (g>=1) && (h>=1) && (g <= 10000) && (h <= 10000)){
                cout<<g<<" "<<h<<"\n";
                continue;
            }
        }
        cout<<"-1 -1\n";
        
        // if(((int)(a-b)==val[0] && (int)(a/b)==val[1]) || (int)((a-b)==val[1] && (int)(a/b)==val[0])){
        //     if(flag) cout<<(int)a<<" "<<(int)b<<"\n";
        //     else cout<<"-1 -1\n";
        // }
        
        // else{
        //     cout<<"-1 -1\n";
        // }
        
        // vector <int> result=factors(val[3]);
        // vector<pair<int,int>> ans;
        // bool flag=true;
        // for(int i=0;i<result.size()-1;i++){
        //     for(int j=i+1;j<=result.size();j++){
        //         if(result[i]+result[j]==val[2]) {
        //             ans.push_back(make_pair(result[i],result[j]));
        //             break;
        //         }
        //     }
        // }
        
        // pair<int, int> final;
        // for(int i=0;i<ans.size();i++){
        //     if(((ans[i].first/ans[i].second)==val[0]) && ((ans[i].first-ans[i].second)==val[1]) || ((ans[i].first/ans[i].second)==val[1]) && ((ans[i].first-ans[i].second)==val[0])){
        //         final.first=ans[i].first;
        //         final.second=ans[i].second;
        //         flag=false;
        //     }
        // }
        
        // if(flag!=false) cout<<"-1 -1\n";
        // else cout<<final.first<<" "<<final.second<<"\n";
    }
	return 0;
}