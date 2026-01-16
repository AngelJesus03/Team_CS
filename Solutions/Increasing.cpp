#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long movimientos = 0;
    long long max_actual;

    cin >> max_actual;  // primer elemento

    for (int i = 1; i < n; i++) {
        long long x;
        cin >> x;

        if (x < max_actual) {
            movimientos += max_actual - x;
        } else {
            max_actual = x;
        }
    }

    cout << movimientos << endl;
    return 0;
}
