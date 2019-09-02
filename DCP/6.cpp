#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <set>
#include <map>
#include <deque>
#include <queue>
#include <cctype>
#include <string>
#include <fstream>
using namespace std;


class Node {
    public:
    int data;
    Node* npx; // xor of next and previous
};

Node* XOR(Node *a, Node* b) {
    return (Node *)((uintptr_t)(a) ^ (uintptr_t)(b));
}

void insert(Node** head, int data) {

    Node* node = new Node();
    node->data = data;

    node->npx = XOR(*head, NULL);

    if(*head != NULL) {
        Node* next = XOR((*head)->npx )
    }
}


int main() {

    Node* head = NULL;
    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);
    insert(&head, 40);

    // print the created list
    printList (head);

    return 0;
}