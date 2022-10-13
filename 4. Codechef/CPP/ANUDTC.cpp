// // //ramnit_code_27
// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// // 	int t;
// // 	cin>>t;
// // 	while(t--){
// // 	    int n;
// // 	    cin>>n;
// // 	    if(360%n!=0) cout<<"n ";
// // 	    else cout<<"y ";
// // 	    if(n>360) cout<<"n ";
// // 	    else cout<<"y ";
// // 	    if(n>26) cout<<"n";       //1+2+3+.......+26=351 (largest below 360)
// // 	    else cout<<"y";
// // 	    cout<<"\n";
// // 	}
// // 	return 0;
// // }


// #include <stdio.h>
// int main()
// {
//     int t; cin>>t;
//     while (t--)
//     {
//         int n;
//         scanf("%d", &n);
//         long long int arr[n];
//         long long int c1 = 0;
//         long long int c2 = 0;
//         for (int i = 0; i < n; i++)
//         {
//             scanf("%intd", &arr[i]);
//             if (arr[i] == 1)
//             {
//                 c1++;
//                 /* code */
//             }
//             if (arr[i] == 2)
//             {
//                 c2++;
//                 /* code */
//             }

//             /* code */
//         }
//         long long int ans = (c1 * (n - c1));
//         if (c1 > 1)
//         {
//             ans += ((c1 * (c1 - 1)) / 2);
//             /* code */
//         }
//         if (c2 > 1)
//         {
//             ans += ((c2 * (c2 - 1)) / 2);
//         }
//         printf("%intd\n", ans);
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// #ifdef LOCAL
// #include "debug.hpp"
// #else
// #define debug(...) void(0);
// #endif
// using namespace std;
// #define int long long

// void solve(){
//     int n,m,l; 
// 	cin>>n>>m>>l; 
// 	int rem = (l + n - 1);
// 	while(m >= l && rem >= l) {
// 		int tmp = (m % rem);
// 		if(tmp == m && m >= l) {
// 			rem = m;
// 			m = tmp;
// 			continue;
// 		} 
// 		else m = tmp;
// 		rem--;
// 	}
// 	cout << m << endl;
// }

// int32_t main(){
//     ios_base::sync_with_stdio(false); cin.tie(NUint); cout.tie(NUint);
//     int t; cin>>t;
//     while(t--) solve();
//     return 0;
// }

// add two numbers represented by linked list
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};

struct Node* addTwoNumbers(struct Node* list1, struct Node* list2){
    int carry = 0;
    struct Node* result = NULL;
    struct Node* temp = NULL;
    while(list1 != NULL || list2 != NULL){
        int sum = 0;
        if(list1 != NULL){
            sum += list1->data;
            list1 = list1->next;
        }
        if(list2 != NULL){
            sum += list2->data;
            list2 = list2->next;
        }
        sum += carry;
        carry = sum / 10;
        sum = sum % 10;
        temp = new Node();
        temp->data = sum;
        temp->next = result;
        result = temp;
    }
    if(carry > 0){
        temp = new Node();
        temp->data = carry;
        temp->next = result;
        result = temp;
    }
    // reverse result
    // struct Node* prev = NULL;
    // struct Node* curr = result;
    // while(curr != NULL){
    //     struct Node* next = curr->next;
    //     curr->next = prev;
    //     prev = curr;
    //     curr = next;
    // }
    // return prev;
    return result;
}

int main(){
    // input 2 linked list
    struct Node* list1 = NULL;
    struct Node* list2 = NULL;
    struct Node* result = NULL;
    int n,m;
    cin>>n>>m;
    while(n--){
        int data;
        cin>>data;
        struct Node* temp = new Node();
        temp->data = data;
        temp->next = list1;
        list1 = temp;
    }
    while(m--){
        int data;
        cin>>data;
        struct Node* temp = new Node();
        temp->data = data;
        temp->next = list2;
        list2 = temp;
    }
    result = addTwoNumbers(list1, list2);
    while(result != NULL){
        cout<<result->data<<" ";
        result = result->next;
    }
    return 0;
}
