#include <iostream>

using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;

    int screens = (y + 1) / 2;
    
    int vacant = 15 * screens - 4 * y;

    x -= vacant;
    if (x < 0)
        x = 0;

    screens += (x + 15 - 1) / 15;

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
