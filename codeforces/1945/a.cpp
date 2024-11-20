// Note: partial solution

#include <iostream>

using namespace std;

#define REPORT(X) cout << #X << " = " << (X) << endl

int solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int total = a;

    if (b % 3 == 0) {
        total += b / 3;
        total += (c + 2) / 3;
        return total;
    }

    // b is not multiple of 3
    int rem = 3 - (b % 3);
    if (c < rem)
        return -1;
    
    b += rem;
    c -= rem;

    total += b / 3;
    total += (c + 2) / 3;
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
