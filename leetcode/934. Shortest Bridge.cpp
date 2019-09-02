#include <iostream>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int shortestBridge(vector<vector<int>>& A) {
    int row = A.size();
    int col = A[0].size();
    bool found=false;
    queue<pair<int, int>> q1, q2;

    // dummy 2D vector
    vector<vector<int>> flag(row, vector<int>(col, -1));  // fill row with a vector of cols that is initialized to -1

    for(int i=0; i<row; i++) {
        if(found)
            break;

        for(int j=0; j<col; j++) {
            if(A[i][j]) {
                q1.push(make_pair(i, j));
                flag[i][j] = 1;
                found = true;
                break;
            }
        }
    }

    vector<int> directions{0, 1, 0, -1, 0};

    while(!q1.empty()) {
        auto curr = q1.front();
        q1.pop();

        // see that no need to get the size of the queue

        for(int i=0; i<4; i++) {
            int R = curr.first + directions[i];
            int C = curr.second + directions[i+1];

            // check if these R and C are within limits
            if(R<0 || C<0 || R>=row || C>=col || flag[R][C]==1) continue; // last condition will be reached if we stumble upon a block during up, right, down , left calls

            // if for these new coordinates we have a 1 in A i.e we have found another memeber of the current island
            if( A[R][C] == 1) {
                q1.push({R, C});
                flag[R][C] = 1;
            }
            else {
                q2.push({R, C});
                flag[R][C] = 0;  // idk why??
            }
        }

    }

    // use bfs again from the neighbor '0' of the first island, count the steps to hit
    // another other '1', which will be the second island
    int steps = 0;
    while(!q2.empty()) {

        steps++;
        int qSize = q2.size();

        while(qSize--) {

            auto curr = q2.front();
            q2.pop();

            for(int i=0; i<4; i++) {
                int R = curr.first + directions[i];
                int C = curr.second + directions[i+1];

                if(R<0 || C<0 || R>=row || C>=col) continue;



                if(flag[R][C]==1 || flag[R][C]==0) continue; // these blocks have already being visited in the previous BFS

                if(A[R][C]==1)
                    return steps;
                else {
                    q2.push({R, C});
                    flag[R][C] = 0;
                }
            }

        }
    }

    return steps;

}

int main() {
    vector<vector<int>> A =  {
            {0, 0, 1},
            {1, 0, 0},
            {1, 1, 0}
    };

    cout<<shortestBridge(A);




    return 0;
}