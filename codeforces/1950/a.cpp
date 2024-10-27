#include <iostream>

using namespace std;

string solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b && b < c) {
        return "STAIR";
    } else if (a < b && b > c) {
        return "PEAK";
    }

    return "NONE";
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        cout << solve() << endl;
    }
}
