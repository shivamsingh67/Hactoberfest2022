//[problem link] (https://leetcode.com/problems/reverse-nodes-in-k-group/)

//JAVA SOLUTION BELOW 

class Solution {
    public ListNode reverseKGroup(ListNode head, int k) {
        int length = size(head);
        for(int i = 1; i+k-1 <= length; i += k)
            head = reverseTwoPointer(head, i, i+k-1);
        return head;
    }
    private int size(ListNode head){
        int count = 0;
        while(head != null){
            count++;
            head = head.next;
        }
        return count;
    }
    
    private ListNode reverseTwoPointer(ListNode head, int left, int right){
        if(left == right) return head;
        ListNode previous = null, current = head;
        
        //reaching the left pointer location
        for(int i=0; current != null && i< left -1; i++){
            previous = current;
            current = current.next;
        }
        ListNode newEnd = current;
        ListNode last = previous;
        ListNode next = current.next;
        
        for(int i=0;current != null && i<right - left +1; i++){
            
            current.next = previous;
            previous = current;
            current = next;
            if(next != null) 
                next = next.next;
        }
        if(last != null)
            last.next = previous;
        else
            head = previous;
        newEnd.next = current;
        return head;
    }
}
