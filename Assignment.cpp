#include <iostream>
using namespace std;
int main() {
    int h, m;
    cin >> h >> m;

    int x, y;
    x = 12 - h;
    y = 60 - m;
    if (x == 12) {
        x = 0;
    }
    if (y == 60) {
        y = 0;
    }

    cout << x << " " << y << endl;

    return 0;
}
