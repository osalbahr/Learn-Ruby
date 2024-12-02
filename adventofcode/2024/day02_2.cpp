#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

bool isSafe(vector<int> levels)
{   
    bool decreasing = true;
    bool increasing = true;
    for (int i = 0; i < levels.size() - 1; i++) {
        if (levels[i] == levels[i + 1]) {
            return false;
        }

        if (abs(levels[i] - levels[i + 1]) > 3) {
            return false;
        }

        if (levels[i + 1] > levels[i]) {
            decreasing = false;
        }

        if (levels[i + 1] < levels[i]) {
            increasing = false;
        }
    }

    return decreasing || increasing;
}

bool isSafeAll(vector<int> levels)
{
    if (isSafe(levels))
        return true;

    // See https://cplusplus.com/reference/vector/vector/erase
    for (int i = 0; i < levels.size(); i++) {
        vector<int> other = levels;
        other.erase(other.begin() + i);

        if (isSafe(other))
            return true;
    }

    return false;
}

int main()
{
    int total = 0;

    string report;
    while (getline(cin, report)) {
        stringstream ss(report);
        vector<int> levels;
        
        int level;
        while (ss >> level)
            levels.push_back(level);

        total += isSafeAll(levels);
    }

    cout << total << endl;
}
