#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    vector<vector<int>> grid(1000);
    for (auto& row : grid) {
        row.resize(1000);
    }

    string line;
    while (getline(cin, line)) {
        stringstream ss(line);

        string command;
        ss >> command;

        // turn on/off
        if (command == "turn") {
            ss >> command;
        }

        int x1, y1;
        char comma;
        ss >> x1 >> comma >> y1;

        string through;
        ss >> through;

        int x2, y2;
        ss >> x2 >> comma >> y2;

        if (command == "toggle") {
            for (int i = x1; i <= x2; i++) {
                for (int j = y1; j <= y2; j++) {
                    grid[i][j] += 2;
                }
            }
        } else if (command == "on") {
            for (int i = x1; i <= x2; i++) {
                for (int j = y1; j <= y2; j++) {
                    grid[i][j]++;
                }
            }
        } else { // command == "off"
            for (int i = x1; i <= x2; i++) {
                for (int j = y1; j <= y2; j++) {
                    grid[i][j]--;
                    if (grid[i][j] < 0) grid[i][j] = 0;
                }
            }
        }
    }

    int total = 0;
    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < 1000; j++) {
            total += grid[i][j];
        }
    }

    cout << total << endl;
}
