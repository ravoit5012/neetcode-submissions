/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *head = new ListNode(0);
        ListNode *dummy = head;
        auto cmp = [](ListNode* a, ListNode*b){
            return a->val > b->val;
        };
        priority_queue<ListNode*, vector<ListNode*>, decltype(cmp)> pq(cmp);
        for(auto &list : lists) if(list) pq.push(list);

        while(!pq.empty()){
            ListNode *temp = pq.top();
            pq.pop();
            if(temp->next) pq.push(temp->next);
            dummy->next = temp;
            dummy = dummy->next;
        }
        return head->next;
    }
};
