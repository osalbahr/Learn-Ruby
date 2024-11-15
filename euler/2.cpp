#include <iostream>

using namespace std;

int fibonacci(int i)
{
    if (i == 1) {
        return 1;
    }

    if (i == 2) {
        return 2;
    }

    return fibonacci(i - 2) + fibonacci(i - 1);
}

int main()
{
    int total = 0;

    for (int i = 1;; i++) {
        int n = fibonacci(i);
        if (n > 4000000) {
            break;
        }

        if (n % 2 == 0) {
            total += n;
        }
    }

    cout << total << endl;
}
