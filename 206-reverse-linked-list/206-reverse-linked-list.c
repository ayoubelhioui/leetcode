/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
int get_length(struct ListNode *head)
{
    int i = 0;
    while (head)
    {
        i++;
        head = head->next;
    }
    return (i);
}
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *first = head;
    struct ListNode *second;
    int size = get_length(head), i = 0;
    while (first)
    {
        second = first->next;
        i = 0;
        while (second && i < size)
        {
            ft_swap(&first->val, &second->val);
            second = second ->next;
            i++;
        }
        size--;
        first = first->next;
    }
    return (head);
}