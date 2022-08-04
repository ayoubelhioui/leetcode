/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *slow_pointer = head;
    struct ListNode *fast_pointer = head;
    if (head == NULL || slow_pointer->next == NULL)
        return (NULL);
    while (fast_pointer && fast_pointer->next)
    {
        // if (fast_pointer == NULL || slow_pointer == NULL)
            // break;
        slow_pointer = slow_pointer->next;
        fast_pointer = fast_pointer->next->next;
        if (fast_pointer == slow_pointer)
            return (true);
        
    }
    return (false);
}