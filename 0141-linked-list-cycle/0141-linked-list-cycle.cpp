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
        unordered_set<ListNode*> m;
        while (head)
        {
            if (m.insert(head).second == false)
                return (true);
            head = head->next;
        }
        return (false);
    }
};