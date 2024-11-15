#include <iostream>

using namespace std;

int solve()
{
    int robinGives = 0;
    int robinHas = 0;

    int n;
    cin >> n;

    int k;
    cin >> k;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        if (a >= k) {
            robinHas += a;
        } else if (a == 0 && robinHas > 0) {
            robinHas--;
            robinGives++;
        }
    }

    return robinGives;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        cout << solve() << endl;
    }
}
