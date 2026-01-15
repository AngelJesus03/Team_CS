#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long expectedSum = n * (n + 1) / 2; // por el rango usar long long
    long long actualSum = 0;

    for (int i = 0; i < n - 1; i++) {
        long long x;
        cin >> x; // Aqui recives la secuencia de los n-1 numeros 
        actualSum += x; 
    }

    cout << expectedSum - actualSum << endl; // la difrencia naturalmente mostrara el restante
    return 0;
}
