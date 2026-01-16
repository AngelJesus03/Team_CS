#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int actual = 1;
    int maximo = 1;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            actual++;
        } else {
            actual = 1;
        }
        if (actual > maximo) {
            maximo = actual;
        }
    }

    cout << maximo << endl;
    return 0;
}
