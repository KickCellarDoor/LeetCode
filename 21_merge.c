struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    if(l1 == NULL)
        return l2;
    if(l2 == NULL)
        return l1;

    if(l1->val > l2->val){
        struct ListNode* temp = l1;
        l1 = l2;
        l2 = temp;
    }
    struct ListNode* result = l1;
    
    for(l1;l1 != NULL;l1 = l1->next){
        if(l1->next == NULL){
            l1->next = l2;
            return result;
        }
        struct ListNode* next = l1->next;
        for(l2;l2 != NULL;l2 = l2->next){
            if(l2->val < next->val){
                l1->next = l2;
                l1 = l1->next;
            }
            else
                break;
        }
        l1->next = next;
    }
    return result;
}