#include <iostream>

using namespace std;

int main()
{
    int bcount = 0;
    int kcount = 0;

    string s;
    cin >> s;
    for (char ch : s) {
        if (ch == 'b') bcount++;
        if (ch == 'k') kcount++;
    }

    if (bcount > kcount) {
        cout << "boba" << endl;
    } else if (kcount > bcount) {
        cout << "kiki" << endl;
    } else if (bcount == 0 && kcount == 0) {
        cout << "none" << endl;
    } else { // bcount = kcount != 0
        cout << "boki" << endl;
    }
}
