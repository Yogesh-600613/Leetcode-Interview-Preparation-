/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*
Method-2 Without using extra space
Reverse second half of linked list
use two pointers to reach mid
start checking from 0 and mid+1
reverse back second half of linked list and return ans
*/


//Method-1 Using extra Space- Stack
class Solution {
public:
    bool isPalindrome(ListNode* head) 
    {
        stack<ListNode*> s;
        ListNode* temp =head;
        while(temp!=NULL)
        {
            s.push(temp);
            temp = temp->next;
        }
        
        temp = head;
        
        while(temp!= NULL)
        {
            int curr = s.top()->val;
            if(temp->val != curr)
                return false;
            s.pop();
            temp = temp->next;
        }
        return true;
    }
};