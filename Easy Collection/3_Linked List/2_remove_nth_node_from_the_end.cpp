/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*
Method-1 Two-Pass
remove (L-N+1)th node from beginning
*/

//Method-2 One Pass
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
       ListNode* fast = head;
        for(int i=0;i<n;i++)
            fast = fast->next;
        ListNode* slow = head;
        
        while(fast-> next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        
        return head;
    }
};