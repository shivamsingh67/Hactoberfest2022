#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;

long long power(long long a,long long b){
    int res=1;
    while(b){
        if(b&1){
            res*=a;
            res=res%mod;
        }
        a=(a*a)%mod;
        b=b>>1;
    }
    return res;
}

int solve(long long A, long long N){
    long long x=power(A,N);
    int p=0;
    while(1){
        int sum=0;
        while(x){
            int digit=x%10;
            sum+=digit;
            x=x/10;           
        }
        p=sum;
        x=p;
        if(p/10==0){break;}
    }
    return p;  
}
int main(){
    int A=2,N=10;
    cout<<solve(A,N);
}