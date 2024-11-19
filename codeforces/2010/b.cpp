#include <iostream>

using namespace std;

int solve()
{
    int a, b;
    cin >> a >> b;

    if (a != 1 && b != 1)
        return 1;

    if (a != 2 && b != 2)
        return 2;

    return 3;
}

int main()
{
    cout << solve() << endl;
}
