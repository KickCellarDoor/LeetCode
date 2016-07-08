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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        for(ListNode* p = head;p != NULL;p = p->next){
            count++;
        }
        int index = count-n+1;
        if(index == 1){
            return head-next;
        }
        for(ListNode* p =head;p != NULL;p = p->next){
            index--;
            if(index == 1){
                ListNode * temp = p->next;
                p->next = p->next->next;
                delete temp;
            }
        }
        return head;
    }
};