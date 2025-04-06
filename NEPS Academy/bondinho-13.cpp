#include <iostream>
using namespace std;

int main() {
    int a, m; // número de alunos e monitores

    cin >> a;
    cin >> m;

    if (a + m <= 50) {
        cout << 'S';
    } else {
        cout << 'N';
    }

    return 0;
}