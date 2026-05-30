struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carry = 0;
    struct ListNode* start = NULL, *end = NULL;
    while(l1 != NULL || l2 != NULL || carry != 0) {
        int sum = carry;
        if(l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }
        carry = sum / 10;

        struct ListNode *nnptr = (struct ListNode *)malloc(sizeof(struct ListNode));
        nnptr->val = sum % 10;
        nnptr->next = NULL;
        if(start == NULL) {
            start = end = nnptr;
        }
        else {
            end->next = nnptr;
            end = nnptr;
        }
    }
    if(start == NULL) {
        start = (struct ListNode *)malloc(sizeof(struct ListNode));
        start->val = 0;
        start->next = NULL;
        return start;
    }
    return start;
}
