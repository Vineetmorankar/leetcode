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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans = {-1,-1};
        
        ListNode* prev = head;
        if(!prev) return ans;
        ListNode* curr = prev->next;
        if(!curr) return ans;
        ListNode* nxt = curr->next;
        if(!nxt) return ans;
        
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int fcp = -1;
        int lcp = -1;
        
        int i =1;
        while(nxt)
        {
            bool iscp = false;
            if((prev->val< curr->val &&  curr->val > nxt->val) || (prev->val> curr->val &&                      curr->val < nxt->val))
            {
                iscp = true;
            }
            
            if(iscp && fcp == -1)
            {
                fcp = i;
                lcp = i;
            }
            else if(iscp)
            {
                mini = min(mini, i-lcp);
                lcp = i;
            }
            
            i++;
            prev = prev->next;
            curr = curr->next;
            nxt = nxt->next;
        }
        
        if(lcp == fcp) return ans;
        
        ans[0] = mini;
        ans[1] = lcp - fcp;
        
        return ans;
        
    }
};