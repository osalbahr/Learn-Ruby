#include <iostream>

using namespace std;

// Valid triangle
// x <= y <= z
// x + y > z
bool isValid(int x, int y, int z)
{
    vector<int> v;
    v.push_back(x);
    v.push_back(y);
    v.push_back(z);

    sort(v.begin(), v.end());

    cout << x << " " << y << " " << z << " (" << (v[0] + v[1] > v[2]) << ")" << endl;

    return v[0] + v[1] > v[2];
}

int main()
{
    int total = 0;

    int x, y, z;
    while (cin >> x >> y >> z) {
        total += isValid(x, y, z);
    }

    cout << total << endl;
}
