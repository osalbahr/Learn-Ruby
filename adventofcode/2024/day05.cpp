#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

bool isValid(const vector<pair<int,int> >& rules, const vector<int> pages)
{
    for (int i = 0; i < pages.size(); i++) {
        for (int j = i + 1; j < pages.size(); j++) {
            int pre = pages[i];
            int post = pages[j];

            for (const auto [rule_pre, rule_post] : rules) {
                if (pre == rule_post && post == rule_pre) {
                    return false;
                }
            }
        }
    }

    return true;
}

int main()
{
    vector<pair<int,int> > rules;

    string line;
    while (getline(cin, line)) {
        int pre, post;
    
        if (sscanf(line.c_str(), "%d|%d", &pre, &post) != 2) {
            break;
        }

        pair<int,int> p = make_pair(pre, post);
        rules.push_back(p);
    }

    int total = 0;
    while (getline(cin, line)) {
        vector<int> pages;
        stringstream ss(line);

        int page;
        char comma;
        while (ss >> page) {
            pages.push_back(page);
            ss >> comma;
        }

        if (isValid(rules, pages)) {
            int idx = pages.size() / 2;
            total += pages[idx];
        }
    }

    cout << total << endl;
}
