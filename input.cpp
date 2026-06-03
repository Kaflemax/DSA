#include <iostream>
using namespace std;

int main() {
    // 1. Declare an array of a fixed size (e.g., 5)
    int numbers[5];

    cout << "Enter 5 numbers:" << endl;

    // 2. Use a loop to take input for each element
    for (int i = 0; i < 5; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i]; // Store input at index i
    }

    // 3. Use another loop to display the stored numbers
    cout << "\nYou entered: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}
Use