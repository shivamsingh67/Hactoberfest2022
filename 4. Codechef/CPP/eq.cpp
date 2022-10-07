#include<bits/stdc++.h>
using namespace std;

// int countFreq(string &pat,string &txt){
//     int m=pat.length();
//     int n=txt.length();
//     int res=0;
//     for(int i=0;i<=n-m;i++){
//         int j;
//         for(j=0;j<m;j++){
//             if(pat[j]!=txt[i+j])
//                 break;
//         }
//         if(j==m)
//             res++;
//     }
//     return res;
// }

int secondLargest(int arr[], int n) {
    int first = 0, second = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[first]) {
            second = first;
            first = i;
        }
        else if (arr[i] <= arr[first]) {
            if (second == -1 || arr[second] < arr[i])
                second = i;
        }
    }
    return second;
}

int main(){
    // string txt="abcdefg";
    // string pat="bcd";
    // cout<<countFreq(pat,txt);
    int arr[5]={-4,-5,-9,-7,-9};
    cout<<secondLargest(arr,5);
    return 0;
}


void deleteNode(Node *head, Node *n) { 
    if(head == n) 
    { 
        if(head->next == NULL) 
        { 
            cout << "There is only one node." <<
                    " The list can't be made empty "; 
            return; 
        } 
        head->data = head->next->data; 
        n = head->next; 
        head->next = head->next->next; 
        free(n); 
  
        return; 
    } 
    Node *prev = head; 
    while(prev->next != NULL && prev->next != n) 
        prev = prev->next; 
  
    if(prev->next == NULL) 
    { 
        cout << "\nGiven node is not present in Linked List"; 
        return; 
    } 
    prev->next = prev->next->next; 
  
    // Free memory 
    free(n); 
  
    return; 
}