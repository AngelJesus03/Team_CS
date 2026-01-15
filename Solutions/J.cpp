#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n, w; // n aun cabe en el rango de int
    cin >> k >> n >> w;

    long long totalCost = 1LL * k * w * (w + 1) / 2; // se puede desbordar durante la multiplicacion aunque el resulado este dentro del rango de int
    // el 1LL sirve para forzar la conversion a long long

    if (totalCost > n)
        cout << totalCost - n << endl;
    else
        cout << 0 << endl;

    return 0;
}
