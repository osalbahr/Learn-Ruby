#include <iostream>

using namespace std;

void solve()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int ans = 1000;
    for (int i = 1; i <= 10; i++) {
        int newAns = abs(i - x1) + abs(i - x2) + abs(i - x3);
        if (newAns < ans)
            ans = newAns;
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
