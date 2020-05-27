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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr)
            return head;

        ListNode* evens = nullptr;
        ListNode* evens_ptr = nullptr;
        ListNode* lastodd = nullptr;
        ListNode* ptr1 = head;
        ListNode* ptr2 = head;
        bool odd =1;

        while(ptr2 != nullptr){
            if(odd){
                lastodd = ptr2;
                ptr2 = ptr2->next;
            }
            else{
                if(evens == nullptr){
                    evens = ptr2;
                    evens_ptr = ptr2;
                }
                else{
                    evens_ptr->next = ptr2;
                    evens_ptr = evens_ptr->next;
                }

                ptr1->next = ptr2->next;
                ptr2 = ptr2->next;
                ptr1 = ptr1->next;
                evens_ptr->next = nullptr;

            }
            odd = !odd;
        }
        lastodd->next = evens;
        return head;
    }
};
