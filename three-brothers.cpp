#include <iostream>

using namespace std;

int main() {
    int a, b; cin >> a >> b;
    for (int i = 1; i < 4; ++i) if (i != a && i != b) cout << i << "\n";
    return 0;
}
