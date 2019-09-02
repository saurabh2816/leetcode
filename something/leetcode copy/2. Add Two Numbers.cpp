#include <iostream>
#include <set>
#include <vector>
#include "header/listnode.h"

using namespace std;

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        if(!l1 && !l2) return NULL;

        if(!l1) return l2;
        if(!l2) return l1;

        int carry=0;
        ListNode* l3 = new ListNode(0);
        ListNode* dummy = l3;

        while(l1 || l2 || carry) {
            int sum = (l1?l1->val:0) + (l2?l2->val:0) + carry;

            carry = sum/10;
            ListNode* node = new ListNode(sum%10);

            l3->next = node;
            l3 = l3->next;

            l1 = l1?l1->next:l1;
            l2 = l2?l2->next:l2;
        }

        return dummy->next;
    }
};
