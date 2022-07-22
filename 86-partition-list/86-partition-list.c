/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int get_size(struct ListNode* head)
{
    int counter = 0;
    while (head)
    {
        counter++;
        head = head->next;
    }
    return (counter);
}
void find_small_and_big(struct ListNode *head, int x, int *small, int *big)
{
    int i = 0, j = 0;
    while (head)
    {
        if (head->val >= x)
            big[i++] = head->val;
        else
            small[j++] = head->val;
        head = head->next;
    }
}

void fill_arrays(int *small, int *big, int size)
{
    int i = 0;
    while (i < size)
    {
        small[i] = -200;
        big[i] = -200;
        i++;
    }
}

struct ListNode* partition(struct ListNode* head, int x){
    int i = 0;
    int size = get_size(head);
    int *small = malloc(sizeof(int) * size);
    int *big = malloc(sizeof(int) * size);
    fill_arrays(small, big, size);
    find_small_and_big(head, x, small, big);
    struct ListNode *temp = head;
    while (temp)
    {
        while (i < size && small[i] != -200)
        {
            temp->val = small[i++];
            temp = temp->next;
        }  
         i = 0;
        while (i < size && big[i] != -200)
        {
            temp->val = big[i++];
            temp = temp->next;
        }
    }
    return (head);
}