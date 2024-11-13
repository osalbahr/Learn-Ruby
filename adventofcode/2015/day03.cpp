#include <iostream>
#include <set>

using namespace std;

// (x, y)
using Point = pair<int,int>;
#define mp make_pair
#define x first
#define y second

#define REPORTP(P) printf("(%d, %d)\n", P.x, P.y)

// Global position
Point pos = mp(0, 0);

int main()
{
    set<Point> s;
    s.insert(pos);

    string line;
    getline(cin, line);

    for (char ch : line) {
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
    }

    cout << s.size() << endl;
}
