#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // esto seria la cant de problemas

    int countSolved = 0; // contador de los resueltos

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c; // se vera como en el input del ejemplo

        if (a + b + c >= 2) { // 110, 101, 011, 111
            countSolved++;
        }
    }

    cout << countSolved << endl;
    return 0;
}
