/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if(list1 == NULL && list2 == NULL) return NULL;
    if(list1 == NULL && list2 != NULL) return list2;
    if(list1 != NULL && list2 == NULL) return list1;

    struct ListNode* res;
    struct ListNode* ptr; 
    if(list1->val <= list2->val) {
        res = list1;
        list1 = list1->next;
    } else {
        res = list2; 
        list2 = list2->next;
    } 
    ptr = res;
    res->next = NULL;

    while(list1 != NULL && list2 != NULL) {
        if(list1->val <= list2->val) {
            ptr->next = list1;
            list1 = list1->next;
        }
        else {
            ptr->next = list2;
            list2 = list2->next;
        }
        ptr = ptr->next;
    }
    (list1 == NULL) ? (ptr->next = list2) : (ptr->next = list1);
    return res;
}