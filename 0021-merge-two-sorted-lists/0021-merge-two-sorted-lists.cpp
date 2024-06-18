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
    ListNode* mergeTwoLists(ListNode* left, ListNode* right) {
        if(!left) return right;
        if(!right) return left;
        
        ListNode* ans = new ListNode(-1);
        ListNode*k = ans;
        while(left && right)
        {
            if(left->val<=right->val)
            {
                k->next = left;
                k = left;
                left = left->next;
            }
            else
            {
                k->next = right;
                k = right;
                right = right->next;
            }
        }
        
        if(right) k->next = right;
        if(left) k->next = left;
        
        return ans->next;
    }
};