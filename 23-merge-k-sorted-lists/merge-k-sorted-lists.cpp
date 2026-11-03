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

        multiset<int>ms;
        
        for (ListNode* list : lists) { 
            while (list != nullptr) { 
                ms.insert(list->val);
                list = list->next;
            }
        }

        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        for(auto ele: ms){      
            temp->next = new ListNode(ele);;           
            temp = temp->next;  
        }

        return dummy->next;
    }
};