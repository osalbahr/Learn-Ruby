#include <iostream>

using namespace std;

// (x, y)
using Point = pair<int,int>;
#define mp make_pair
#define x first
#define y second

#define REPORTP(P) printf("(%d, %d)\n", P.x, P.y)

// Global position
Point pos = mp(0, 0);

// Valid point
bool isValid(Point p) {
    if (p.x < -1 || p.x > 1) {
        return false;
    }

    if (p.y < -1 || p.y > 1) {
        return false;
    }

    return true;
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

    if (pos.y == 1) {
        if (pos.x == -1) {
            return '1';
        } else if (pos.x == 0) {
            return '2';
        } else {
            return '3';
        }
    }

    if (pos.y == 0) {
        if (pos.x == -1) {
            return '4';
        } else if (pos.x == 0) {
            return '5';
        } else {
            return '6';
        }
    }

    // y == -1
    if (pos.x == -1) {
        return '7';
    } else if (pos.x == 0) {
        return '8';
    } else {
        return '9';
    }
}

int main()
{
    string line;
    while (getline(cin, line)) {
        cout << getButton(line);
    }
    cout << endl;
}
