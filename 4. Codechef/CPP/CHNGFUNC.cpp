#include <iostream>
#include <math.h>
using namespace std;

// bool perfectSq(int n){
//     if(n>=0){
//         long long root=sqrt(n);
//         if(root*root==n) 
//             return true;
//     }
//     return false;
// }

int main() {
	long long a,b;
	cin>>a>>b;
	long long count=0,x;
	for(long long i=1;i<=a;i++){
	   // for(int j=1;j<=b;j++){
	   //     x=(i*i)+j;
	   //     if(perfectSq(x)) count++;
	   // }
	    x=i*i+b;
        count+=(sqrt(x)-i);
	}
	cout<<count<<"\n";
	return 0;
}
