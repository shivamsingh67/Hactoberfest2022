//Ramnit here baby
#include<bits/stdc++.h>
using namespace std;

typedef long long lolo;
#define fasterDaddy ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define all(v) v.begin,v.end()
// #define puba push_back
// #define F .first
// #define S .second

// lolo fact(lolo n){
//     return (n==1 || n==0) ? 1: n * fact(n - 1);
// }

#define MAX 500
 
int multiply(int x, int res[], int res_size);

void factorial(int n){
    int res[MAX];
    res[0] = 1;
    int res_size = 1;
 
    for (int x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);
 
    for (int i=res_size-1; i>=0; i--)
        cout << res[i];
}

int multiply(int x, int res[], int res_size)
{
    int carry = 0;
    for (int i=0; i<res_size; i++){
        int prod = res[i] * x + carry;
        res[i] = prod % 10; 
        carry  = prod/10;   
    }
 
    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}

int main() {
	fasterDaddy;
	int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        factorial(n);
        cout<<"\n";
    }
	return 0;
}