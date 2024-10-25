#include <iostream>

using namespace std;

// Note: Copilot
int dayspermonth(int m)
{
    if (m == 2) {
        return 28;
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        return 30;
    } else {
        return 31;
    }
}

int main()
{
    int m;
    cin >> m;
    cout << dayspermonth(m) << endl;
}