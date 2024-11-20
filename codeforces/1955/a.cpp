#include <iostream>

using namespace std;

int solve()
{
    int n, a, b;
    cin >> n >> a >> b;

    if (b > 2 * a) {
        return n * a;
    }

    if (n % 2 == 0) {
        return (n / 2) * b;
    }

    // n is odd
    return a + (n / 2) * b;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        cout << solve() << endl;
    }
}
