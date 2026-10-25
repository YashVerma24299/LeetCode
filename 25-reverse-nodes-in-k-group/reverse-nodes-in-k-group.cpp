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
    ListNode* reverseKGroup(ListNode* head, int k) {
        stack<int>s;
        ListNode*curr=head;
        int size=0;
        while(curr!=nullptr) {
            size++;
            curr=curr->next;
        }

        int pair =size/k;
        curr=head;

        while(curr!=nullptr){
            if(pair>0){
                ListNode*temp=curr;
                for(int i=0; i<k; i++){
                    s.push(temp->val);
                    temp=temp->next;
                }
                // cout<<"STACK: ";
                while(!s.empty()){
                    int num=s.top();
                    s.pop();
                    // cout<<num;

                    curr->val=num;
                    curr=curr->next;
                }
                // cout<<endl;
                pair--;
            }else{
                curr=curr->next;
            }
        }
        return head;
    }
};