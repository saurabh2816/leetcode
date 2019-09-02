#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {

    vector<vector<int>> v = {{1,2,3}, {4,5,6}, {7,8,9}};
    vector<vector<int>>::iterator row;
    vector<int>::iterator col;

    for(row=v.begin(); row!=v.end(); row++) {
        for(col=row->begin(); col!=row->end(); col++) {
            cout<<*col<<" ";
        }
    }


    return 0;
}