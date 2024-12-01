#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2;

    int a, b;
    while (cin >> a >> b) {
        v1.push_back(a);
        v2.push_back(b);
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    int total = 0;
    for (int i = 0; i < v1.size(); i++) {
        total += abs(v1[i] - v2[i]);
    }

    cout << total << endl;
}
