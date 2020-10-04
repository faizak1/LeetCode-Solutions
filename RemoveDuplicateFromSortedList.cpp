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
        ListNode* res = new ListNode(-1);
        ListNode* ptr = res;
        ListNode* temp = head;
        while (temp){
            int current = temp->val;
            while (temp->next && temp->next->val == current){
                temp = temp->next;
            }
            ptr->next = new ListNode(temp->val);
            ptr=ptr->next;
            temp = temp->next;
        }
        return res->next;
    }
};