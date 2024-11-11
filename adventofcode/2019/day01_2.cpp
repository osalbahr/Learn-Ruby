#include <iostream>

using namespace std;

int getFuel(int n)
{
    int nextFuel = n / 3 - 2;
    
    if (nextFuel < 0) {
        return 0;
    }

    return nextFuel + getFuel(nextFuel);
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
