#include <iostream>
#include <set>

using namespace std;

// (x, y)
using Point = pair<int,int>;
#define mp make_pair
#define x first
#define y second

#define REPORTP(P) printf("(%d, %d)\n", P.x, P.y)

// Global positions
Point pos = mp(0, 0);
Point roboPos = mp(0, 0);

int main()
{
    set<Point> s;
    s.insert(pos);
    s.insert(roboPos);

    string line;
    getline(cin, line);

    for (int i = 0; i < line.size(); i++) {
        char ch = line[i];

        if (i % 2 == 0) {
            if (ch == '^') {
                pos = mp(pos.x, pos.y + 1);
            } else if (ch == 'v') {
                pos = mp(pos.x, pos.y - 1);
            } else if (ch == '>') {
                pos = mp(pos.x + 1, pos.y);
            } else { // ch == '<'
                pos = mp(pos.x - 1, pos.y);
            }

            s.insert(pos);
        } else {
            if (ch == '^') {
                roboPos = mp(roboPos.x, roboPos.y + 1);
            } else if (ch == 'v') {
                roboPos = mp(roboPos.x, roboPos.y - 1);
            } else if (ch == '>') {
                roboPos = mp(roboPos.x + 1, roboPos.y);
            } else { // ch == '<'
                roboPos = mp(roboPos.x - 1, roboPos.y);
            }

            s.insert(roboPos);
        }
    }

    cout << s.size() << endl;
}
