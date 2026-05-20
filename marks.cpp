//Shisir Kafle
#include <iostream>
using namespace std;
int main()
{
    int students, score, highest;
    cout << "Enter the number of students: ";
    cin >> students;
    cout << "Enter score for student 1: ";
    cin >> highest;
    for (int i = 2; i <= students; i++)
    {
        cout << "Enter score for student " << i << ": ";
        cin >> score;

        // Check if current score is higher
        if (score > highest)
        {
            highest = score;
        }
    }
    // Display highest score
    cout << "The highest score is: " << highest;
    return 0;
}

