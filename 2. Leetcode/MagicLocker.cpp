#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;

long long powr(long long a, long long n){
    long long ans = 1;
    while(n){
        if(n%2 == 0){
            a = (a*a)%mod;
            n /= 2; // or n=n>>1;
        }
        if(n%2 == 1){
            ans = (ans*a)%mod;
            n--;
        }   
    }
    return ans;
}
int locker(int n){
    int ans=0;
    if(n<2){
        return n;
    }
    else{
        int x=n/3, rem=n%3;
        if(rem==0){
            ans+= powr(3,x);
        }
        else if(rem==1){
            ans+=((powr(3,x-1))*4)%mod;
        }
        else if(rem==2){
            ans+=((powr(3,x))*2)%mod;
       }
    }
    return ans;
}
int main(){
    int n;n=100;
    cout<<locker(n)<<endl;
}