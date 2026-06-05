#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string x = "aarya";
    string y = "There is rainy today and aarya has umbrella";

    vector<int> pos;

    for (int i = 0; i <= y.length() - x.length(); i++) {
        int j;
        for (j = 0; j < x.length(); j++) {
            if (y[i + j] != x[j])
                break;
        }

        if (j == x.length()) { // match found
            pos.push_back(i);
        }
    }

    if (!pos.empty())
        cout << x;   // Output: aarya
    else
        cout << "Not found";

    return 0;
}