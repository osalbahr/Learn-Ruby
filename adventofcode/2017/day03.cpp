// Note: this is a draft
#include <iostream>

using namespace std;

#define REPORT(X) cout << #X << " = " << (X) << endl

// inner square is 9
// 2nd inner square is 25 - 9
int getDist(int n)
{
    for (int i = 0;; i++) {
        if (i * i >= n + 1)
            return i - 1;
    }
}

int main()
{
    int n;
    cin >> n;

    int dist = getDist(n);

    cout << dist << endl;
}
