/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*
Method-1 Using Extra Memory- Hash Table
while(head != NULL)
if not in hash table then put else
return true
*/





// Method-2 Without using extra memory- Slow and Fast Pointer
class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        
        if(head == NULL || head->next == NULL)
            return false;
        
        
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(slow != fast)
        {
            if(fast == NULL || fast->next == NULL)
                return false;
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
    }
};