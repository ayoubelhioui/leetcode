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
    int size = get_list_size(head);
    // if (size % 2 == 0)
    //     size++;
    size = size / 2 + 1;
    while (head)
    {
        size--;
        if (size == 0)
           return (head);
        head = head->next;
    }
    return (head);
}