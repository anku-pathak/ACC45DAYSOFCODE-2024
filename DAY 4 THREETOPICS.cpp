#include <iostream>
using namespace std;

int main() {
    int A, B, C, X;
    cin >> A >> B >> C >> X;

    if (X == A || X == B || X == C) {
        cout << "Yes" << endl;  // Chef can win the contest
    } else {
        cout << "No" << endl;   // Chef cannot win the contest
    }
    return 0;
}