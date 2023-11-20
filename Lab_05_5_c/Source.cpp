#include <iostream>
#include <cmath>
using namespace std;

int l(int n, int level, int& depth) {

    if (level > depth)
        depth = level;

    cout << "level = " << level << endl;

    if (n == 1) {
        return 1;
    }
    else if (n % 2 == 0) {
        return 2 * l(n / 2, level + 1, depth) - 1;
    }
    else {
        return 2 * l(n / 2, level + 1, depth) + 1;
    }
}

int main() {
    int n;
    int depth = 3;
    int level = 1;
    cout << "Enter the number of people: ";
    cin >> n;

    cout << "depth = " << depth << endl;

    int result = l(n / 2, level + 1, depth);
    cout << "The number of repetitions of the procedure: " << result << endl;

    return 0;
}