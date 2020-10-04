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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        ListNode* list = new ListNode(-1);
        ListNode* track = list;
        while (temp){
            int current = temp->val;
            bool entered = false;
            while (temp->next && temp->next->val==current){
                temp = temp->next;
                entered = true;
            }
            if(entered==false){
                track->next = new ListNode(temp->val);
                track = track->next;
            }
            temp = temp->next;
        }
        return list->next;
    }
};