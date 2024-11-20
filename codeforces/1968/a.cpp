#include <iostream>
#include <numeric>

using namespace std;

#define REPORT(X) cout << #X << " = " << (X) << endl

void solve()
{
    int x;
    cin >> x;

    int maxSum = -1;
    int maxY = -1;
    for (int y = 1; y < x; y++) {
        int g = gcd(x, y);

        int total = g + y;
        if (total > maxSum) {
            maxSum = total;
            maxY = y;
        }
    }

    cout << maxY << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
