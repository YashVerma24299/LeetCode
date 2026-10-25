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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        unordered_set<ListNode*> s;
        ListNode* first=headA;

        while(first!=nullptr){
            s.insert(first);
            first=first->next;
        }
        first=headB;

        while(first!=nullptr){
            if(s.find(first)!=s.end()) return first;
            first=first->next;
        }
        return nullptr;
    }
};