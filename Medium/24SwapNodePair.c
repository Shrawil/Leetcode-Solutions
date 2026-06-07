struct ListNode* swapPairs(struct ListNode* head) {
    if(head == NULL || head->next == NULL) return head;

    struct ListNode temp;
    temp.next = head;
    struct ListNode *prev = &temp;
    struct ListNode *first = head;
    struct ListNode *second = head->next;

    while(first != NULL && first->next != NULL) {
        prev->next = second;
        first->next = second->next;
        second->next = first;

        prev = first;
        first = first->next;
        if(first != NULL) second = first->next;
    }
    return temp.next;
}
