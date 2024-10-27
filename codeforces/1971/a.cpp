#include <iostream>

using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;

    if (x > y) {
        cout << y << " " << x << endl;
    } else {
        cout << x << " " << y << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
