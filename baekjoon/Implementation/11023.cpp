// 백준 11023번 : 더하기 3
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int num, sum = 0;
    while (cin >> num) {
        sum += num;
    }
    cout << sum;
    return 0;
}