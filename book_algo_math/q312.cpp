#include <iostream>
#include <vector>
using namespace std;

/** Nを素因数分解するプログラム */

// 1. 素数かどうかを判定するプログラム
bool isPrime(long long x) {
    for (long long i = 2; i * i <= x; i++) {
        if(x % i) return false;
    }
    return true;
}


// 2. Nの約数であって、かつ、素数であるならば出力
int main() {
    long long N;
    cin >> N;

    vector<int> A;
    for (long long i = 2; i * i <= N; i++) {
        if (N % i == 0 & isPrime(i)) {
            A.push_back(i);
        }
    }
    for (int i: A) {
        cout << A[i] << endl;
    }
    return 0;
}