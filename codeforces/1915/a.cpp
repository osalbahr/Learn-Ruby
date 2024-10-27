#include <iostream>

using namespace std;

int solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b != c) {
        return c;
    }
    if (a == c && b != c) {
        return b;
    }
    if (b == c && a != c) {
        return a;
    }

    exit(1);
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        cout << solve() << endl;
    }
}
