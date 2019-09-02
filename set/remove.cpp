#include <iostream>
#include <set>
#include <vector>
#define __NEWLINE__ cout<<endl
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5};
    auto end = remove(v.begin(), v.end(), 3);

    for(auto V: v) {
        cout<<V<<" ";
        // 1 2 4 5 5
    }

    __NEWLINE__;

    for(auto start=v.begin(); start!=end; start++) {
        cout << *start << " ";
        // 1 2 4 5
    }

    __NEWLINE__;

//    v.erase(v.begin(), v.begin()+2);

    for(auto V: v) {
        cout<<V<<" ";
        // 4 5 5
    }



    return 0;
}