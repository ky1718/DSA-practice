
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int countDigits(int N){
    int cnt = 0;
    while(N > 0){
        int lastDigit = N%10;
        cnt = cnt + 1;
        N = N / 10;
    }
    return cnt;
}
int main() {
    int N = 987865;
    cout << "N: "<< N << endl;
    int digits = countDigits(N);
    cout << "Number of Digits in N: "<< digits << endl;
    return 0;
}
