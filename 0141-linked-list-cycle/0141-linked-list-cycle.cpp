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
        set<ListNode*> m;
        int index = 0;
        while (head)
        {
            if (m.insert(head).second == false)
                return (true);
            head = head->next;
            index++;       
        }
        return (false);
    }
};