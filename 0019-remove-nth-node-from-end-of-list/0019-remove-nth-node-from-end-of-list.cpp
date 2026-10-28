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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // int count = 0;
        // ListNode* temp = head;
        
        // while(temp != nullptr){
        //     count++;
        //     temp = temp->next;
        // }
        // if(count == n){
        //     ListNode* newhead = head->next;
        //     delete head;
        //     return newhead;
        // }
        // ListNode* curr = head;
        // for(int i = 0; i < count - n - 1; i++){
        //     curr = curr->next;
        // }   
        // ListNode* delnode = curr->next;
        // curr->next = delnode->next;
        // delete delnode;
        // return head;

        ListNode dummy(0);
        dummy.next = head;

        ListNode* slow = &dummy;
        ListNode* fast = &dummy;

        for(int i = 0; i <= n ; i++){
            fast = fast->next;
        }

        

        while(fast != nullptr){
            fast = fast->next;
            slow = slow->next; 
        }
        ListNode* delnode = slow->next;
        slow->next = delnode->next;
        delete delnode;
        return dummy.next;

    }
};