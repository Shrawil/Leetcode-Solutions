struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* rider = head;
    int totalNodes = 0;
    for(;rider != NULL; rider = rider->next) {
        totalNodes++;
    } 
    int remove = totalNodes - n;

    if(remove == 0) {
        struct ListNode* newHead = head->next;
        free(head);
        return newHead;
    }

    rider = head;
    for(int i = 0; i < remove - 1; i++) {
        rider = rider->next;
    }

    struct ListNode* temp = rider->next;
    rider->next = temp->next;
    free(temp);

    return head;
}
