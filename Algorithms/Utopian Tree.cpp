#include <iostream>
using namespace std;

int height(int n) {
    int height = 1;
    for (int i=1; i<=n; ++i) {
        if (i%2 != 0)
            height *= 2;
        else
            height += 1;
    }
    return height;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}
