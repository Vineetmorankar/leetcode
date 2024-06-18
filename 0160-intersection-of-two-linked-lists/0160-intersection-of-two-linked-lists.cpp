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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* a = headA;
        ListNode* b = headB;
        
        while(a->next && b->next)
        {
            if(a==b) return a;
            a=a->next;
            b=b->next;
        }
        
       // if(a->next && b->next && a!=b) return NULL;
        
        if(!a->next)
        { 
            int blen=0;
            while(b->next)
            {
                blen++;
                b=b->next;
            }
            
            while(blen!=0)
            {
                headB=headB->next;
                blen--;
            }
        }
        else
        {
            int alen=0;;
            while(a->next)
            {
                alen++;
                a=a->next;
            }
        
            
            while(alen!=0)
            {
                headA=headA->next;
                alen--;
            }
        }
        
        while(headA!=headB)
        {
            if (!headA || !headB) return nullptr;
            headA = headA->next;
            headB = headB->next;
        }
        
        return headA;
       
    }
};