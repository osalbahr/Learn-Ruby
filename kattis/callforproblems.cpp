#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int total = 0;
    while (n--) {
        int d;
        cin >> d;

        if (d % 2) {
            total++;
        }
    }

    cout << total << endl;
}
