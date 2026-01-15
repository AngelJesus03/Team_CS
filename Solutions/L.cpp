#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int best = 1, current = 1;

    for (int i = 1; i < (int)s.size(); i++) { // complejidad O(n) (longitud de s)
        if (s[i] == s[i - 1]) { // compara el anterior con el actual, comparar s[i] == s[i + 1] implica que se vaya fuera del rango y eso no es lo correcto al parecer
            current++;
        } else {
            current = 1; // reseteo
        }
        best = max(best, current); // lo actuliza en cada iteracion
    }

    cout << best << endl;
    return 0;
}