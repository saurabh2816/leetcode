/* https://www.geeksforgeeks.org/longest-common-substring-dp-29/
Time Complexity: O(m*n)
Auxiliary Space: O(m*n)
 */
#include <iostream>
#include <set>
#include <vector>
#define __NEWLINE__ cout<<endl
using namespace std;

int longestCommonSubstring(string a, string b) {
    int board[a.size() + 1][b.size() + 1];
    int max=INT_MIN;

    int i, j;
    for (i = 0; i <= a.size(); ++i) {
        for (j = 0; j <= b.size(); ++j) {
            if (i == 0 || j == 0) {
                board[i][j] = 0;
                continue;
            }

            if (a[i-1] == b[j-1]) {
                board[i][j] = 1 + board[i - 1][j - 1];
                cout<<a[i]<<" "<<b[j]<<endl;
                max = board[i][j]>max?board[i][j]:max;
            }
            else
                board[i][j] = 0;
        }
    }

    for(int i=0; i<=a.size(); i++) {
        for(int j=0; j<=b.size(); j++) {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }

    return max;

}

int main() {

    cout<<longestCommonSubstring("saurabh", "sauxxurabh");
    return 0;

}