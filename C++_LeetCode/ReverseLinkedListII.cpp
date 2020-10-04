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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(!head || !head->next) return head;
        ListNode* temp = head;
        ListNode* track = new ListNode(-1);
        ListNode* ptr = track;
        stack<ListNode*> s;
        int num = 1;
        while(num<m){
            ptr->next = new ListNode(temp->val);
            ptr = ptr->next;
            temp = temp->next;
            num++;
        }
        while(num<=n){
            s.push(temp);
            temp = temp->next;
            num++;
        }
        while(!s.empty()){
            ListNode* curr = s.top();
            ptr->next = new ListNode(curr->val);
            ptr = ptr->next;
            s.pop();
        }
        while (temp!=NULL){
            ptr->next = new ListNode(temp->val);
            ptr = ptr->next;
            temp = temp->next;
        }
        return track->next;
    }
};
