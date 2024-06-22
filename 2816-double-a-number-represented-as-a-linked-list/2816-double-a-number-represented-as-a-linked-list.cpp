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
    
    void solve(ListNode* head, int &c)
    {
        if(!head) return;
        solve(head->next, c);
        
        int no = head->val;
        int fval = no * 2 + c;
        head->val = fval%10;
        c = fval/10;
    }
    
    ListNode* doubleIt(ListNode* head) {
        int c = 0;
        solve(head, c);
        if(c)
        {
            ListNode* cnode = new ListNode(c);
            cnode->next = head;
            head = cnode;
        }
        return head;
    }
};