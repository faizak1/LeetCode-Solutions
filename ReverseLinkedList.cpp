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
        if (!head || !head->next) return head;
        ListNode* temp = head;
        stack<ListNode*> st;
        while(temp){
            st.push(temp);
            temp = temp->next;
        }
        ListNode* current = new ListNode(-1);
        ListNode* ptr = head;
        while(!st.empty()){
            current = st.top();
            st.pop();
            ptr->next = new ListNode(current->val);
            ptr = ptr->next;
        }
        return head->next;
    }
};