#include <iostream>

using namespace std;

int getWrap(int x, int y, int z)
{
    vector<int> v;

    v.push_back(x * y);
    v.push_back(y * z);
    v.push_back(x * z);

    sort(v.begin(), v.end());

    return 3 * v[0] + 2 * v[1] + 2 * v[2];
}

int main()
{
    int total = 0;

    int x, y, z;
    while (scanf("%dx%dx%d", &x, &y, &z) == 3) {
        total += getWrap(x, y, z);
    }

    cout << total << endl;
}
