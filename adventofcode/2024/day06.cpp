#include <iostream>
#include <vector>

using namespace std;

// (x, y)
using Point = pair<int,int>;
#define mp make_pair
#define x first
#define y second

enum Dir {UP, RIGHT, DOWN, LEFT};

vector<string> grid;
int dir = UP;

Point getGuard()
{
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == '^') {
                return mp(i, j);
            }
        }
    }

    exit(1);
}

bool isValid(Point guard)
{
    if (guard.x < 0 || guard.x >= grid.size())
        return false;
    
    if (guard.y < 0 || guard.y >= grid[0].size())
        return false;
    
    return true;
}

Point getNewPos(Point pos)
{
    if (dir == UP) {
        return mp(pos.x - 1, pos.y);
    }
    if (dir == DOWN) {
        return mp(pos.x + 1, pos.y);
    }
    if (dir == LEFT) {
        return mp(pos.x, pos.y - 1);
    }
    if (dir == RIGHT) {
        return mp(pos.x, pos.y + 1);
    }
    exit(1);
}

int main()
{

    string line;
    while (getline(cin, line)) {
        grid.push_back(line);
    }

    Point guard = getGuard();
    while (true) {
        int x = guard.x;
        int y = guard.y;
        grid[x][y] = 'X';

        Point pos = getNewPos(guard);
        if (!isValid(pos)) {
            break;
        }

        if (grid[pos.x][pos.y] == '#') {
            dir = (dir + 1) % 4;
            continue;
        }

        guard = pos;
    }

    int total = 0;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 'X') {
                total++;
            }
        }
    }

    cout << total << endl;
}
