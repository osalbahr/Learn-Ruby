#include <iostream>
#include <sstream>

using namespace std;

int getDiv(const string& line)
{
    stringstream ss(line);

    vector<int> v;
    int num;
    while (ss >> num)
        v.push_back(num);
    
    sort(v.begin(), v.end());

    for (int i = v.size() - 1; i >= 0; i--) {
        for (int j = i - 1; j >= 0; j--) {
            int bigger = v[i];
            int smaller = v[j];

            if (bigger % smaller == 0) {
                return bigger / smaller;
            }
        }
    }

    exit(1);
}

int main()
{
    int total = 0;

    string line;
    while (getline(cin, line)) {
        int diff = getDiv(line);
        total += diff;
    }

    cout << total << endl;
}
