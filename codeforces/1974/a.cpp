#include <iostream>

using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;

    int screens = (y + 1) / 2;
    
    int vacant = 0;
    if (y % 2 == 0) {
        vacant = (15 - 8) * (y / 2);
    } else {
        vacant = (15 - 4) * 1;
        vacant += (15 - 8) * (y - 1) / 2;
    }

    x -= vacant;

    while (x > 0) {
        screens++;
        x -= 15;
    }

    cout << screens << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
