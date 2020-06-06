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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode * dummy = new ListNode(0);
        ListNode * cur = dummy;
        priority_queue<pair<int, ListNode *>> pq;
        for(auto head : lists) {
            if (head != nullptr) {
                pq.push({-head->val, head});
            }
        }
        while (!pq.empty()) {
            ListNode * node = pq.top().second;
            pq.pop();
            cur->next = node;
            cur = cur->next;
            if (node->next != nullptr) {
                pq.push({-node->next->val, node->next});
            }
        }
        cur->next = nullptr;
        return dummy->next;
    }
};
