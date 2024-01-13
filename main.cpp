#include <iostream>

int main() {
    int thisDay;
    int thisMonth;
    int thisYear;
    std::cout << "Enter today's date (day, month, year): ";
    std::cin >> thisDay >> thisMonth >> thisYear;

    int birthDay;
    int birthMonth;
    int birthYear;
    std::cout << "Enter date of birth (day, month, year): ";
    std::cin >> birthDay >> birthMonth >> birthYear;

    if ((thisYear > birthYear + 18) || (thisYear == birthYear + 18 && thisMonth > birthMonth) ||
    (thisYear == birthYear + 18 && thisMonth == birthMonth && thisDay > birthDay))
        std::cout << "CAN!!!" << std::endl;
    else
        std::cout << "It is forbidden!!!" << std::endl;
}
