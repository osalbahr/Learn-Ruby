#include <iostream>

using namespace std;

int getMuls(const string& line)
{
    int total = 0;

    for (int i = 0; i < line.size() - 4; i++) {
        if (line.substr(i, 4) == "mul(") {
            int a, b;
            
            if (sscanf(line.c_str() + i, "mul(%d,%d)", &a, &b) == 2) {        
                
                // edge case
                char ch;
                sscanf(line.c_str() + i, "mul(%d,%d%c", &a, &b, &ch);
                if (ch != ')')
                    continue;

                cout << line.substr(i, 8) << endl;
                cout << a << " * " << b << endl;

                total += a * b;
            }
        }
    }

    return total;
}

int main()
{
    int total = 0;

    string line;
    while (getline(cin, line)) {
        total += getMuls(line);
    }

    cout << total << endl;
}
