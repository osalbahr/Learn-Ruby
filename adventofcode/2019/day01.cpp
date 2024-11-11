#include <iostream>

using namespace std;

int getFuel(int n)
{
    return n / 3 - 2;
}

int main()
{
    int total = 0;

    int n;
    while (cin >> n) {
        total += getFuel(n);
    }

    cout << total << endl;
}
