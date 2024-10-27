#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int total = 0;

    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c >= 2) total++;
    }

    cout << total << endl;
}
