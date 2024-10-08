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
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> visited;
        while(head){
            if(visited.find(head) != visited.end())
                return(head);        
            visited.insert(head);
            head = head->next;
        }
        return NULL;
    }
};