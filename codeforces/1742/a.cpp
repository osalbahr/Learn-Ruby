#include <iostream>

using namespace std;

string solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b == c) {
        return "YES";
    }

    if (b + c == a) {
        return "YES";
    }

    if (a + c == b) {
        return "YES";
    }

    return "NO";
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        cout << solve() << endl;
    }
}
