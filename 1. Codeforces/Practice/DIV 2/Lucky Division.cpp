// Lucky Division
#include <iostream>
using namespace std;
 
string lucky_number(int n){
    string s = "NO";
    int a[] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int k = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<k;i++){
        if(n%a[i] == 0){
            s = "YES";
            return s;
        }
    }
    return s;
}
 
int main(){
    int n;
    cin >> n;
    cout << lucky_number(n);
    return 0;
}
