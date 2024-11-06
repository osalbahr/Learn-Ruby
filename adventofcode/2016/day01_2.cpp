#include <iostream>
#include <set>

using namespace std;

#define x first
#define y second
#define REPORTP(P) printf("(%d, %d)\n", P.x, P.y)

// example: R3,
int getCount(const string& s) {
    int count = 0;
    sscanf(s.c_str() + 1, "%d", &count);
    return count;
}

pair<int, int> getPointTwice()
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
    set< pair<int,int> > visited;
    while (cin >> s) {
        int count = getCount(s);
        if (s[0] == 'R') {
            dir++;
        } else {
            dir--;
        }

        // Normalize if needed
        dir = (dir + 4) % 4;
        
        pair<int, int> p;
        switch(dir) {
        case 0:
            for (int i = 0; i < count; i++) {
                y += 1;
                p = make_pair(x, y);
                REPORTP(p);
                if (visited.count(p)) return p;
                visited.insert(p);
            }
            break;

        case 1:
            for (int i = 0; i < count; i++) {
                x += 1;
                p = make_pair(x, y);
                REPORTP(p);
                if (visited.count(p)) return p;
                visited.insert(p);
            }
            break;

        case 2:
            for (int i = 0; i < count; i++) {
                y -= 1;
                p = make_pair(x, y);
                REPORTP(p);
                if (visited.count(p)) return p;
                visited.insert(p);
            }
            break;

        case 3:
            for (int i = 0; i < count; i++) {
                x -= 1;
                p = make_pair(x, y);
                REPORTP(p);
                if (visited.count(p)) return p;
                visited.insert(p);
            }
            break;
        }
    }

    exit(1);
}

int main()
{
    pair<int, int> pointTwice = getPointTwice();
    cout << abs(pointTwice.x) + abs(pointTwice.y) << endl;
}