#include <iostream>
using namespace std;


/** Nの約数をすべて出力するプログラム */ 
int main() {
    long long N;
    cin >> N;

    for (long long i = 1; i * i <= N; i++) {
        if (N % i == 0) {
            cout << i << " ";  // スペースを入れる
            if (i != N/i) {    // 平方数の重複を防ぐ
                cout << N/i << " ";
            }
        }
    }
    cout << endl;  // 最後に改行
    return 0;
}