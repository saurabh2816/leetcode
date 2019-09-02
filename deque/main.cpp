#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <set>
#include <map>
#include <deque>
using namespace std;

int main() {

    int i;
    deque<int> empty;
    deque<int> fill (4, 100);
    deque<int> range (fill.begin(), fill.end());
    deque<int> copy (range);


    int someInts[] = {16,2,77,29, 32, 2};
    deque<int> newdeque (someInts, someInts + sizeof(someInts)/ sizeof(int));
    for (const auto &item : newdeque) {
        cout << item << " ";  // 16 2 77 29 32 2
    }

    return 0;
}