/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* res = head;
    while(head != NULL) {
        if(head->next != NULL && head->val == head->next->val) {
            struct ListNode* temp = head->next;
            head->next = temp->next;
            free(temp);
        }
        else {
            head = head->next;
        }
    }
    return res;
}