#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    switch(n) {
        case 0:
            cout << "zero";
            break;

        case 1:
            cout << "jeden";
            break;
        
        case 2:
            cout << "dwa";
            break;

        case 3:
            cout << "trzy";
            break;

        case 4:
            cout << "cztery";
            break;

        case 5:
            cout << "piec";
            break;

        case 6:
            cout << "szesc";
            break;

        case 7:
            cout << "siedem";
            break;

        case 8:
            cout << "osiem";
            break;

        case 9:
            cout << "dziewiec";
            break;

        default:
            cout << "blad";
            break;
    }
    return 0;
}