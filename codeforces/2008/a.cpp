#include <iostream>

using namespace std;

string solve(int a, int b)
{
    // odd one's
    if (a % 2 == 1) {
        return "NO";
    }

    // evens
    if (a % 2 == 0 && b % 2 == 0) {
        return "YES";
    }

    // even 1's, odd 2's

    if (a == 0) {
        if (b % 2 == 0) {
            return "YES";
        }

        return "NO";
    }

    // cancel two's with one's
    if (a / 2 <= b) {
        b -= a / 2;
        return solve(a, b);
    }

    // cancel one's with two's
    a -= b * 2;
    return solve(a, b);
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << solve(a, b) << endl;
    }
}
