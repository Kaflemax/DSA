#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> computeLPS(const string& pat) {
    int m = pat.size();
    vector<int> lps(m, 0);

    int len = 0;
    int i = 1;

    while (i < m) {
        if (pat[i] == pat[len]) {
            lps[i++] = ++len;
        } else {
            if (len != 0)
                len = lps[len - 1];
            else
                i++;
        }
    }
    return lps;
}

vector<int> KMP(const string& txt, const string& pat) {
    vector<int> matches;
    vector<int> lps = computeLPS(pat);

    int i = 0, j = 0;

    while (i < txt.size()) {
        if (txt[i] == pat[j]) {
            i++;
            j++;
        }

        if (j == pat.size()) {
            matches.push_back(i - j);
            j = lps[j - 1];
        } else if (i < txt.size() && txt[i] != pat[j]) {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }

    return matches;
}

int main() {
    string x = "aarya";
    string y = "There is rainy today and aarya has umbrella";

    vector<int> pos = KMP(y, x);

    if (!pos.empty())
        cout << x << endl;   // Output: aarya
    else
        cout << "Not found" << endl;
}