#include <iostream>
#include <cmath>
#include <iomanip>

// Asim Shrestha
using namespace std;

double futureInvestmentValue(double investmentAmount,
                             double annualInterestRate,
                             int years)
{
    double monthlyRate = annualInterestRate / 1200.0;
    int months = years * 12;

    return investmentAmount * pow(1 + monthlyRate, months);
}

int main()
{
    double amount, rate;
    int years;

    cout << "Enter investment amount: ";
    cin >> amount;

    cout << "Enter annual interest rate (%): ";
    cin >> rate;

    cout << "Enter number of years: ";
    cin >> years;

    cout << fixed << setprecision(2);

    cout << "Future invest value: "
         << futureInvestmentValue(amount, rate, years)
         << endl;

    return 0;
}