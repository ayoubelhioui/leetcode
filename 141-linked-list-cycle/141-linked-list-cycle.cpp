/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
         map<ListNode*, int> m;
        int index = 0;
        while (head)
        {
            if (m.find(head) == m.end())
                m[head] = index;
            else 
                return (true);
            head = head->next;
            index++;       
        }
        return (false);
    }
};