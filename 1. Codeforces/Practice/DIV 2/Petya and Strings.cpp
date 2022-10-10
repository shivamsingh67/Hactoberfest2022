/* 
Approach 1: 
d+=a[i]-b[i] but this gives wrong answer
 
Approach 2:
Convert Upper case to Lower case and then compare
*/
 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string a,b;
    cin >> a >> b;
    int n = a.length();
    for(int i=0;i<n;i++){
        if(a[i]<91){
            a[i]+=32;
        }
        if(b[i]<91){
            b[i]+=32;
        }
    }
    if(a<b) cout << -1 << endl;
    else if(a==b) cout << 0 << endl;
    else cout << 1 << endl;
    return 0;
}
 
