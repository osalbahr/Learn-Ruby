#include <iostream>

using namespace std;

int solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    return (b > a) + (c > a) + (d > a);
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        cout << solve() << endl;
    }
}
