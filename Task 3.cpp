/*
                                    Author : Aya Gamal
                  
     Write a C++ program print the day name that user entered the day number (by using switch)


*/


#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter The number of day" << "\n";
    cin >> x;

    switch (x) {
    case 1:
        cout << "Saturday\n";
        break;
    case 2:
        cout << "Sunday\n";
        break;
    case 3:
        cout << "Monday\n";
        break;
    case 4:
        cout << "Tuesday\n";
        break;
    case 5:
        cout << "Wednesday\n";
        break;
    case 6:
        cout << "Thursday\n";
        break;
    case 7:
        cout << "Friday\n";
        break;
    default:
        cout << "Not Found\n";
    }
    return 0;
}