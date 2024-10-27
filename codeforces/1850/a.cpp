#include <iostream>

using namespace std;

string solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b >= 10) {
        return "YES";
    }
    if (a + c >= 10) {
        return "YES";
    }
    if (b + c >= 10) {
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
