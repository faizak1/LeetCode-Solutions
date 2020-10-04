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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        ListNode* prev = head;
        if (prev==NULL) return NULL;
        temp = prev->next;
        if (prev->val==val && prev->next==NULL) return NULL;
        if (prev->val!=val && prev->next==NULL) return prev;
        bool deleteFirst = false;
        if (prev->val == val) deleteFirst = true;
        while (temp!=NULL){
            if (temp->val==val){
                prev->next = prev->next->next;
                temp = prev->next;
            }
            else{
                temp = temp->next;
                prev = prev->next;
            }
        }
        if (deleteFirst == true) return head->next;
        return head;
    }
};