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
    
    int getlen(ListNode* head)
    {
        ListNode* temp = head;
        int len = 0;
        while(temp)
        {
            len++;
            temp = temp->next; 
        }
        
        return len;
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(!head) return 0;
        
        int len = getlen(head);
        
        int need = k%len;
        if(need == 0) return head;
        
        int newlastpos = len-need-1;
        ListNode* newlast=head;
        for(int i=0;i<newlastpos;i++)
        {
            newlast = newlast->next;
        }
        
        ListNode* newhead = newlast->next;
        newlast->next=NULL;
        
        ListNode* it = newhead;
        
        while(it->next)
        {
            it=it->next;
        }
        
        it->next = head;
        
        return newhead;
    }
};