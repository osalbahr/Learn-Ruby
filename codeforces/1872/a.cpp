#include <iostream>

using namespace std;

int solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int pours = 0;
    if (a > b) {
        while (a > b) {
            pours++;
            b += c;
            a -= c;
        }

        return pours;
    }

    // b >= a
    while (b > a) {
        pours++;
        b -= c;
        a += c;
    }

    return pours;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        cout << solve() << endl;
    }
}
