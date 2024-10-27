#include <iostream>

#define REPORT(X) cout << #X << " = " << (X) << endl

using namespace std;

void solve()
{
    int n;
    cin >> n;

    // REPORT(n);

    int turn = -1;
    int x = 0;

    int move = 1;
    while (-n <= x && x <= n) {
        x += turn * (2 * move - 1);
        turn *= -1;

        move++;

        // REPORT(x);
    }

    if (turn == -1) {
        cout << "Kosuke" << endl;
    } else {
        cout << "Sakurako" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
