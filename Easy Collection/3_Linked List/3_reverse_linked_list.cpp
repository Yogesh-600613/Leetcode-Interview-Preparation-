/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*
Method-1 Recursive approach
uses O(n) extra space
*/


// Method-2 Iterative approach
class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        
        
        while(curr != NULL)
        {
            ListNode* agla = curr->next;
            curr->next = prev;
            prev = curr;
            curr = agla;
        }
        
        return prev;
    }
};