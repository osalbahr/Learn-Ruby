#include <iostream>

using namespace std;

int solve()
{
    int n;
    cin >> n;

    int total = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        if (i % 2 == 0) {
            total += a;
        } else {
            total -= a;
        }
    }

    return total;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        cout << solve() << endl;
    }
}
