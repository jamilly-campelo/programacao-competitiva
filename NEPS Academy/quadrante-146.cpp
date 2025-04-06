#include <iostream>
using namespace std;

int main() {
    int x, y;

    cin >> x;
    cin >> y;

    if (x == 0 || y == 0) {
        cout << "eixos";
    } else {
        if (x > 0 && y > 0) {
            cout << "Q1";
        } else if (x < 0 && y > 0) {
            cout << "Q2";
        } else if (x < 0 && y < 0) {
            cout << "Q3";
        } else if (x > 0 && y < 0) {
            cout << "Q4";
        }
    }

    return 0;
}