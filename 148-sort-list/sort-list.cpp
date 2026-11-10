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
    ListNode* sortList(ListNode* head) {
        if(head == nullptr || head-> next == nullptr) return head;

        multiset<int>s;
        ListNode*temp=head;

        while(temp!=nullptr){
            s.insert(temp->val);
            temp=temp->next;
        }

        ListNode* ans =new ListNode(0);
        ListNode*dummy=ans;
        
        for(auto ele: s){
            dummy->next=new ListNode(ele);
            dummy=dummy->next;
        }

        return ans->next;
    }
};