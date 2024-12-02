#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    
    while (n--) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int youngest = v[0];
    for (int a : v) {
        youngest = min(youngest, a);
    }

    cout << youngest << endl;
}
