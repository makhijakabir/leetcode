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
    ListNode* reverseList(ListNode* head) {
        
        if (head == NULL)
            return NULL;
        
        if (head->next == NULL)
            return head;
        
        ListNode *temp = head->next, *prev = head;
        
        while (temp!=NULL){
            
            if  (temp->next == NULL){
                temp->next = head;
                head = temp;
                prev = temp = prev->next = NULL;
                return head;
            }
            
            prev->next = temp->next;
            temp->next = head;
            head = temp;
            temp = prev->next;
        }
        
        cout << "reached here";
        
        temp->next = head;
        head = temp;
        
        return head;
        
    }
};