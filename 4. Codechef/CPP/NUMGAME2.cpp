//ramnit_code_27
#include <bits/stdc++.h>
using namespace std;

// bool Is_Prime(int n){
//     int i = 2;
//     bool is_prime = true;
//     float half = n/2;

//     while( is_prime && i<=half ){
//         if ( n % i==0 )
//             is_prime = false;
//         i++;
//     }
//     return is_prime;
// }

// int LargestPrime(int n){
// 	int MaxPrime = 0;
// 	bool found = false;
// 	int i = n;

// 	while ( !found && i>2 )
// 	{
// 	    if ( Is_Prime(i) )
// 	    {
//           found = true;
// 	      MaxPrime = i;
// 	    }
//         i--;
// 	}

// 	return MaxPrime;
// }

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	   // bool bob=true;
	   // while(n>0){
	   //     int l=LargestPrime(n);
	   //     n-=l;
	   //     if(bob) bob=false;
	   //     if(!bob) bob=true;
	   // }
	   // if(bob) cout<<"BOB\n";
	   // else cout<<"ALICE\n";
	   if(n%4!=1) cout<<"BOB\n";
	   else cout<<"ALICE\n";
	}
	return 0;
}
