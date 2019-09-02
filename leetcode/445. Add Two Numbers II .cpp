/* This program won't run for longer inputs in C++. Leetcode not accepted.*/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {


        // 1. iterate through list and convert to nums
        long long int num1=0, num2=0;
        ListNode* node = l1;

        while(node!=NULL) {
            num1 = num1*10 + node->val;
            node = node->next;
        }

        node = l2;
        while(node!=NULL) {
            num2 = num2*10 + node->val;
            node = node->next;
        }

        // 2. add the numbers
        long long  int sum = num1 + num2;

        // 3. convert to linked list
        ListNode* l3 = NULL;
        while(sum) {
            ListNode* n = new ListNode(sum%10);
            sum = sum/10;

            if(l3==NULL) {
                // first time insertion
                l3 = n;
            }
            else {
                n->next = l3;
                l3 = n;
            }
        }

        return l3;
    }
};