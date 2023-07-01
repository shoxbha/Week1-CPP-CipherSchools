#include <iostream>
using namespace std;

void printPattern(int n) {
    char currentChar = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << currentChar;
        }
        cout << endl;
        currentChar++;
    }
}

int main() {
    int N = 7;
    printPattern(N);
    return 0;
}
