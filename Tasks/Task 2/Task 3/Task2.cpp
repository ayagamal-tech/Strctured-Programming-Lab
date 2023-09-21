/*

                          Author : Aya Gamal

  Write a C++ program to create calculator (by using if..else if..else)


*/


#include <iostream>
using namespace std;
int main() {
    double a, b, res; char op;
    cout << "Enter two numbers and the operation" << "\n";
    cin >> a >> op >> b;
    if (op == '+') {
        res = a + b;
        cout << "The result is " << res << "\n";
    }
    else if (op == '-') {
        res = a - b;
        cout << "The result is " << res << "\n";
    }
    else if (op == '*') {
        res = a * b;
        cout << "The result is " << res << "\n";
    }
    else if (op == '/') {
        res = a / b;
        cout << "The result is " << res << "\n";
    }
    else { cout << "Not found"; }
    return 0;
}