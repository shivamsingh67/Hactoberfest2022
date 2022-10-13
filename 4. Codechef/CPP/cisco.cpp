// #include <bits/stdc++.h>
// using namespace std;

// int lastModified(int input1, int input2[])
// {
//     int last = 0, sum = 0;
//     for (int i = 0; i < input1; i++)
//     {
//         sum += input2[i];
//     }
//     if (sum == (input1 * 9))
//     {
//         return 0;
//     }
//     for (int i = input1 - 1; i > 0; i--)
//     {
//         if (input2[i] < 9)
//         {
//             input2[i]++;
//             last = i;
//         }
//     }
//     return last + 1;
// }

// int main()
// {
//     int input1;
//     cin >> input1;
//     int input2[input1];
//     for (int i = 0; i < input1; i++)
//     {
//         cin >> input2[i];
//     }
//     int last = lastModified(input1, input2);
//     cout << last << endl;
//     return 0;
// }

// // Language: cpp
// #include <stdio.h>
// #include <string.h>
// using namespace std;

// struct Result
// {
//     Result() : output1(){};
//     int output1[100];
// };


// Result altTab(int input1, int input2, int input3[])
// {
//     Result result;
//     int swapIdx = input2 % input1;
//     // leftRotateByOne(input3, swapIdx);

//     int first = input3[0];
//     for (int i = 0; i < swapIdx - 1; i++) {
//         input3[i] = input3[i + 1];
//     }
 
//     input3[swapIdx-1] = first;

//     for (int i = 0; i < input1; i++){
//         result.output1[i] = input3[i];
//     }
//     // return result;
// }

// int main(){
//     int input1;
//     int input2;
//     int input3[100];
//     scanf("%d %d", &input1, &input2);
//     for (int i = 0; i < input1; i++)
//     {
//         scanf("%d", &input3[i]);
//     }
//     Result result = altTab(input1, input2, input3);
//     for (int i = 0; i < input1; i++)
//     {
//         printf("%d ", result.output1[i]);
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int minCost(int input1,int input2[] ,int input3[])
// {

// }


// int checkEquality(string s)
// {
//     return (s[0] == s[s.size() - 1]);
// }
 
// int findGoodNames(string s)
// {
//     int result = 0;
//     int n = s.length();
 
//     for (int i = 0; i < n; i++){
//        for (int len = 1; len <= n-i; len++){
//           if (checkEquality(s.substr(i, len)) && len-i>1){
//              result++;
//           }
//        }
//     }
//     return result;
// }
 
// // Driver function
// int main()
// {
//     string s("abcab");
//     cout << countSubstringWithEqualEnds(s);
//     return 0;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;


// int scoreOfString(string S){
//     if(S.size()<=2){
//         return S.size();
//     }
//     long long score=0;
//     int mod=1000000007;
//     int i=0;
//     score+=scoreOfString(S.substr(i+1))+scoreOfString(S.substr(i+2))+count(S.begin(),S.end(),'0')*count(S.begin(),S.end(),'1');
//     score%=mod;
//     return score%mod;
// }

// int main(){
//     string S;
//     cin>>S;
//     cout<<scoreOfString(S);
//     return 0;
// }