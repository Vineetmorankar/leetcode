/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if(!head) return NULL;
        
        Node* it = head;
        
        while(it)
        {
            Node* clone = new Node(it->val);
            clone->next = it->next;
            it->next=clone;
            it = clone->next;
        }
        
        // it = head;
//         while(it)
//         {
//             cout<<it->val<<" ";
//             it = it->next;
//         }
        
        // return it;
        
        it = head;
        Node *clonehead = it->next;
        
        while(it)
        {
            Node* cn = it->next;
            cn->random = it->random? it->random->next : NULL;
            it=it->next->next;
        }
        
        it = head;
        while(it)
        {
            Node* cnh = it->next;
            it->next = cnh->next;
            if(cnh->next)
            {
                cnh->next=cnh->next->next;
            }
            it = it->next;
        }
        
        return clonehead;
    }
    
};