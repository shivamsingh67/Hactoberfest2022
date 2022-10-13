//Ramnit here baby
#include<bits/stdc++.h>
using namespace std;

// typedef long long lolo;
#define fasterDaddy ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define all(v) v.begin,v.end()
// #define puba push_back
// #define F .first
// #define S .second

// vector<int> primeFactors(int n){
//     vector<int> point(2);
//     point[0]=0;
//     point[1]=0;
//     while (n % 2 == 0){
//         point[0]++;
//         n = n/2;
//     }
 
//     for (int i = 3; i <= sqrt(n); i = i + 2){
//         while (n % i == 0){
//             if(i%2==0) 
//                 point[0]++;
//             else 
//                 point[1]++;
            
//             n = n/i;
//         }
//     }
 
//     if (n > 2){
//         // if(i%2==0) 
//         //     point[0]++;
//         // else 
//             point[1]++;
//     }
//     return point;
// }

bool isPrime(int n)
{
    static int i = 2;
    
    if (n == 0 || n == 1) {
        return false;
    }
 
    if (n == i)
        return true;
 
    if (n % i == 0) {
        return false;
    }
    
    i++;
    return isPrime(n);
}

int main() {
	fasterDaddy;
	int t;
    cin>>t;

    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        
        // int ans;
        // if(isPrime(n)){
        //     if (n%2==0) 
        //         ans=a;
        //     else 
        //         ans=b;
        // }
        // else{
        //     vector<int> point;
        //     point=primeFactors(n);
        //     // cout<<point[0]<<" & " <<point[1]<<"\n";
        //     if(a<0 && b<0){
        //         if (n%2==0) 
        //             ans=a;
        //         else 
        //             ans=b;
        //     }
        //     else if(a<0 && b>=0){
        //         ans=a+(point[1]*b);
        //     }
        //     else if(a>=0 && b<0){
        //         ans=(point[0]*a)+b;
        //     }
        //     else{
        //         ans=(point[0]*a)+(point[1]*b);
        //     }
        // }
        // cout<<ans<<endl;
        
        int odd = 0;
        int even = 0;
        int ans = 0;
        for (int i = 2; i * i <= n; i++){
            while (n % i == 0){
                n /= i;
                if (i % 2)
                    odd++;
                else
                    even++;
            }
        }
        if (n > 1){
            if (n % 2)
                odd++;
            else
                even++;
        }

        if (a >= 0 && b >= 0){
            ans = a * even + b * odd;
        }
        
        else if (a >= 0 && b < 0){
            if (even)
                ans = a * even;
            else if (odd)
                ans = b;
        }
        else if (a < 0 && b >= 0){
            ans = b * odd;
            if (even)
                ans += a;
        }
        else if (a < 0 && b < 0){
            if (even)
                ans += a;
            else if (odd)
                ans += b;
        }
        cout << ans << endl;
    }
	return 0;
}