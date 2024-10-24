// Note: TLE

#include <iostream>

#define REPORT(X) cout << #X << " = " << (X) << endl

using namespace std;

void solve()
{
    int total = 0;

    int x, y, k;
    cin >> x >> y >> k;

    // even is x direction
    int dir = 0;

    while (x > 0 || y > 0) {

        total++;

        if (dir % 2 == 0) {
            if (x > 0) x -= k;
        } else {
            if (y > 0) y -= k;
        }
        
        dir++;
    }

    cout << total << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
