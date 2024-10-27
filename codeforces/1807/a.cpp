#include <iostream>

using namespace std;

char solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b == c) {
        return '+';
    }

    return '-';
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        cout << solve() << endl;
    }
}
