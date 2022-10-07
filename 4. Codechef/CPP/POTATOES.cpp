#include <iostream>
#include <math.h>
using namespace std;

bool checkPrime(int n){
    if (n <= 1)
        return false;
        
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,i;
        cin>>a>>b;
        int c=a+b;
        for(i=1;i>0;i++){
            if(checkPrime(c+i)==true) break;
        }
        cout<<i<<"\n";
    }
	return 0;
}
