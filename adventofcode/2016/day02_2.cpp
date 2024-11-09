#include <iostream>

using namespace std;

// (x, y)
using Point = pair<int,int>;
#define mp make_pair
#define x first
#define y second

#define REPORTP(P) printf("(%d, %d)\n", P.x, P.y)

// Global position
Point pos = mp(-2, 0);

// Valid point
bool isValid(Point p) {
    if (p.x < -2 || p.x > 2) {
        return false;
    }

    if (p.y < -2 || p.y > 2) {
        return false;
    }

    // inner square
    if (p.x >= -1 && p.x <= 1 && p.y >= -1 && p.y <= 1) {
        return true;
    }

    // special case
    if (p.x == 0 || p.y == 0) {
        return true;
    }

    return false;
}

void move(char ch) {
    if (ch == 'U') {
        Point newPos = mp(pos.x, pos.y + 1);
        if (isValid(newPos)) {
            pos = newPos;
        }
        return;
    }

    if (ch == 'D') {
        Point newPos = mp(pos.x, pos.y - 1);
        if (isValid(newPos)) {
            pos = newPos;
        }
        return;
    }

    if (ch == 'R') {
        Point newPos = mp(pos.x + 1, pos.y);
        if (isValid(newPos)) {
            pos = newPos;
        }
        return;
    }

    if (ch == 'L') {
        Point newPos = mp(pos.x - 1, pos.y);
        if (isValid(newPos)) {
            pos = newPos;
        }
        return;
    }
}

char getButton(string line)
{
    for (char ch : line) {
        move(ch);
    }

    // REPORTP(pos);

    if (pos.y == 2) {
        return '1';
    }

    if (pos.y == 1) {
        if (pos.x == -1) {
            return '2';
        } else if (pos.x == 0) {
            return '3';
        } else {
            return '4';
        }
    }

    if (pos.y == 0) {
        if (pos.x == -2) {
            return '5';
        } else if (pos.x == -1) {
            return '6';
        } else if (pos.x == 0) {
            return '7';
        } else if (pos.x == 1) {
            return '8';
        } else {
            return '9';
        }
    }

    if (pos.y == -1) {
        if (pos.x == -1) {
            return 'A';
        } else if (pos.x == 0) {
            return 'B';
        } else {
            return 'C';
        }
    }

    // y == -2
    return 'D';
}

int main()
{
    string line;
    while (getline(cin, line)) {
        cout << getButton(line);
    }
    cout << endl;
}
