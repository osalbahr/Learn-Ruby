#include <iostream>

using namespace std;

int getRibbon(int x, int y, int z)
{
    vector<int> v;

    v.push_back(x);
    v.push_back(y);
    v.push_back(z);

    sort(v.begin(), v.end());

    return 2 * (v[0] + v[1]) + x*y*z;
}

int main()
{
    int total = 0;

    int x, y, z;
    while (scanf("%dx%dx%d", &x, &y, &z) == 3) {
        total += getRibbon(x, y, z);
    }

    cout << total << endl;
}
