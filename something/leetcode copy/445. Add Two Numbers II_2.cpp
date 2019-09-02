/*
 * Iterate both linkedlist and add the digits to stack
 * Take values from stack and start adding (thes would be least significant digits) and create a linkedlist
 * Keep carry in while loop for simplicity and elegance
 * */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1;
        stack<int> s2;
        int num1, num2;
        int carry=0;


        while(l1!=NULL) {
            s1.push(l1->val);
            l1 = l1->next;
        }

        while(l2!=NULL) {
            s2.push(l2->val);
            l2 = l2->next;
        }

        ListNode* l3 = NULL;

        while(!s1.empty() || !s2.empty() || carry) {

            if(!s1.empty()) {
                num1 = s1.top();
                s1.pop();
            }
            else
                num1 = 0;

            if(!s2.empty()) {
                num2 = s2.top();
                s2.pop();
            }
            else
                num2 = 0;

            int sum = num1+num2+carry;

            ListNode* node = new ListNode(sum%10);
            carry = sum/10;

            node->next = l3;
            l3 = node;

        }


        return l3;
    }
};