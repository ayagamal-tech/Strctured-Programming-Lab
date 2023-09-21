/*
                                  Author : Aya Gamal

    problem : Write a C++ program that asks the user to enter an integer and reports all 
    dividors is descending order that is, list all numbers evenly divide the given number 
    sorted from smallest to largest.You may assume the user enters a positive integer.
    
    input : 30 
    output: 30 15 10 6 5 3 2 1

*/

#include <iostream>
using namespace std;
const int N = 1e6;
int arr[N];

int main() {
    int num;
    int start = 0;
    cout << "Enter a number: "; cin >> num;
    for (int i = num; i > 0; --i) {
        if (num % i == 0) { arr[start] = i; start++; }
    }
    cout << "The divisors are: ";
    for (int j = 0; j < start; j++) {
        cout << arr[j];
        if (j != start) { cout << " "; }
    }

    return 0;
}
