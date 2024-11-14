/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        ListNode *temp=head;
        ListNode *x=head;
        ListNode *y=head;
        while(temp!=NULL && temp->next!=NULL)
        {
            x=x->next;
            temp=temp->next->next;
            while(temp==x)
            {
                if(x!=y)
                {
                    x=x->next;
                    y=y->next;
                }
                return true;
            }
        }   
        return false; 
    }
};