#include <iostream>

using namespace std;

// example: R3,
int getCount(const string& s) {
    int count = 0;
    sscanf(s.c_str() + 1, "%d", &count);
    return count;
}

int main()
{
    int x = 0, y = 0;

    /*
        North = 0
        East = 1
        South = 2
        West = 3
    */
    enum {NORTH, EAST, SOUTH, WEST};
    int dir = 0;

    string s;
    while (cin >> s) {
        int count = getCount(s);
        if (s[0] == 'R') {
            dir++;
        } else {
            dir--;
        }

        // Normalize if needed
        dir = (dir + 4) % 4;

        switch(dir) {
        case 0:
            y += count;
            break;

        case 1:
            x += count;
            break;

        case 2:
            y -= count;
            break;

        case 3:
            x -= count;
            break;
        }

        
    }

    cout << abs(x) + abs(y) << endl;
}
