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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *p = head;
        ListNode *temp = head;
        int count = 0;
        while (p!=NULL){
            count++;
            p=p->next;
        }
        if (count==1){
            head=NULL;
        }
        int until = count-n;
        if (count>1 && until==0)
            head = head->next;
        int countHere=1;
        while(countHere <= until){
            if (countHere==until){
                temp->next = temp->next->next;
            }
            temp=temp->next;
            countHere++;
        }
        return head;
    }
};