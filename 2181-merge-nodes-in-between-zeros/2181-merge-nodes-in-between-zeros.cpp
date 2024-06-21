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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* prev = head;
        ListNode* curr = prev->next;
        ListNode* ansn = prev->next;
        int ans=0;
        while(curr)
        {
            if(curr->val!=0)
            {
                ans+=curr->val;
                
            }
            else
            {
                 ansn->val = ans;
                if(curr->next)
                {
                    ansn=ansn->next;
                }
                else
                {
                    ListNode* delstart = ansn->next;
                    ansn->next = NULL;
                    while(delstart)
                    {
                        ListNode* ndel = delstart->next;
                        delete delstart;
                        delstart = ndel;
                    }
                    break;
                }
                
                ans = 0;
                
            }
            curr=curr->next;
            // prev=prev->next;
        }
        
            ListNode* nhead = head->next;
            head->next=NULL;
        
            return nhead;
    }
};