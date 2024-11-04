/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> res;
    int pairSum(ListNode* head) 
    {
        ListNode *fast = head;
        ListNode *slow = head;
        int max = 0, x ;
        while (fast)
        {
            res.push_back(slow -> val);
            fast = fast->next->next;
            slow = slow->next;
            
        }
        while(slow)
        {
            x = slow -> val + res.back();
            if( x > max) max = x;
            slow = slow -> next;
            res.pop_back();
        }

        return max;
    }
};