#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Recursive function to print numbers from current down to 1
    void printNumbers(int current) {
        // Base case: if current is less than 1, stop recursion
        if (current < 1)
            return;

        // Print current number
        cout << current << " ";

        // Recursive call with next smaller number
        printNumbers(current - 1);
    }
};

int main() {
    Solution sol;
    int n = 10;

    sol.printNumbers(n);
    cout << "\n";

    return 0;
}
