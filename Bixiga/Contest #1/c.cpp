#include <iostream>

int function (int x) {
    return x*x + 2*x + 3;
}

int main () {
    int t;
    std::cin >> t;

    int output = function(function(function(t) + t) + function(function(t)));

    std::cout << output;

    return 0;
}