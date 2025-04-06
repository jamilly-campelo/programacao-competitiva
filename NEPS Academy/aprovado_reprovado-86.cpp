#include <iostream>
using namespace std;

int main() {
    float n1, n2, media;

    cin >> n1;
    cin >> n2;

    media = (n1 + n2)/2;

    if (media >= 7) {
        cout << "Aprovado";
    } else if (media >= 4) {
        cout << "Recuperacao";
    } else {
        cout << "Reprovado";
    }

    return 0;
}