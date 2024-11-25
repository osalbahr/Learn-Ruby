#include <iostream>
#include <vector>

using namespace std;

vector<int> getInput()
{
    vector<int> v;
    
    int n;
    while (cin >> n)
        v.push_back(n);
    
    return v;
}

int main()
{
    vector<int> v = getInput();

    int steps = 0;
    int pos = 0;
    while (pos >= 0 && pos < v.size()) {
        int n = v[pos];
        v[pos]++;

        pos += n;

        steps++;
    }

    cout << steps << endl;
}
