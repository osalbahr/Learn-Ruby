#include <iostream>

using namespace std;

// (x, y)
#define mp make_pair
#define x first
#define y second

#define REPORTP(P) printf("(%d, %d)\n", P.x, P.y)

pair<int,int> pos = mp(0, 0);

void move(char ch) {
    if (ch == 'U') {
        if (pos.y < 1) {
            pos = mp(pos.x, pos.y + 1);
        }
        return;
    }

    if (ch == 'D') {
        if (pos.y > -1) {
            pos = mp(pos.x, pos.y - 1);
        }
        return;
    }

    if (ch == 'R') {
        if (pos.x < 1) {
            pos = mp(pos.x + 1, pos.y);
        }
        return;
    }

    if (ch == 'L') {
        if (pos.x > -1) {
            pos = mp(pos.x - 1, pos.y);
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
