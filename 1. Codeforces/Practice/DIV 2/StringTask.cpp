// String Task
#include <iostream>
using namespace std;
 
bool vowels(char c){
    if(c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u' || c == 'Y' || c == 'y') return true;
    return false;
}
 
int main(){
    string s,t;
    cin >> s;
    for(int i=0;i<s.length();i++){
        if(!vowels(s[i])){
            t+= '.';
            if(s[i]>=65 && s[i]<=90){
                char c = s[i]+32;
                t+=c;
            }
            else t+=s[i];
        }
    }
    cout << t;
    return 0;
}
