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

    int x1, y1, z1;
    int x2, y2, z2;
    int x3, y3, z3;
    while (cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3 >> z1 >> z2 >> z3) {
        total += isValid(x1, y1, z1);
        total += isValid(x2, y2, z2);
        total += isValid(x3, y3, z3);
    }

    cout << total << endl;
}
