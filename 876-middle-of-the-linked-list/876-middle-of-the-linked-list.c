/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int get_list_size(struct ListNode *head)
{
    int i = 0;
    while (head)
    {
        i++;
        head = head->next;
    }
    return (i);
}

struct ListNode* middleNode(struct ListNode* head){
    int middle = get_list_size(head);
    if (middle % 2 == 0)
        middle++;
    middle = middle / 2 + 1;
    while (head)
    {
        middle--;
        if (middle == 0)
           return (head);
        head = head->next;
    }
    return (head);
}