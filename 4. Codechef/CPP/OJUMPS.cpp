#include <iostream>
using namespace std;

int main() {
	long long a;
	cin>>a;
	if(a==0 || a==1 || a%3==0 || (a-1)%6==0) cout<<"yes";
	else cout<<"no";
	return 0;
}