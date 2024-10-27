#include <iostream>

using namespace std;

int solve()
{
    int n;
    cin >> n;

    return n / 10 + n % 10;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        cout << solve() << endl;
}
