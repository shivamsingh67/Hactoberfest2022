//ramnit_code_27
#include <bits/stdc++.h>
using namespace std;

bool marry(string s1, string s2, int m, int n){
	int j = 0;
	for (int i = 0; i < n && j < m; i++)
		if (s1[j] == s2[i])
			j++;

	return (j == m);
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>s1>>s2;
	    int m = s1.length();
	    int n = s2.length();
	    (marry(s1, s2, m, n)|| marry(s2, s1, n, m))? cout << "YES\n": cout << "NO\n";
	}
	return 0;
}