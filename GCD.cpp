//Shisir Kafle
#include <iostream>
using namespace std;
int gcd(int m, int n) {
    if (m % n == 0)      // Base case: if remainder is 0
        return n;
    else
        return gcd(n, m % n);   // Recursive call
}
int main() {
    // Test cases
    cout << "gcd(24, 16) = " << gcd(24, 16) << endl;
    cout << "gcd(255, 25) = " << gcd(255, 25) << endl;
    return 0;
}


