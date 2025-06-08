#include <iostream>
#include <iomanip> 
#include <cmath>
#include "Loan.h"
using namespace std;
int main() {
    double rate;
    double years;
    double amount;
    double graceperiod;
    double answer;
    cout << "請輸入年利率 (例如 2.5): ";
    cin >> rate;
    cout << "請輸入貸款年數 (例如 5): ";
    cin >> years;
    cout << "請輸入貸款金額 (例如 100000): ";
    cin >> amount;
    cout << "是否有寬限期?(是:1/否:2)";
    cin >> answer;
    Loan loan(rate, years, amount);
    if (answer == 1) {
        cout << "請輸入寬限期 (例如 3): ";
        cin >> graceperiod;
        loan.setGraceperiod(graceperiod);
        double graceperiodpayin = loan.getGraceperiodpayin();
        double graceperiodpayout = loan.getGraceperiodpayout();
        cout << fixed << setprecision(2);
        cout << "寬限期內每月應繳金額: $" << graceperiodpayin << endl;
        cout << "寬限期後每月應繳金額: $" << graceperiodpayout << endl;
    }
    else {
        double monthly = loan.getMonthpay();
        cout << fixed << setprecision(2);
        cout << "每月應繳金額: $" << monthly << endl;
    }
    return 0;
}
