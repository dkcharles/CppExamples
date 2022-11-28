// https://www.learncpp.com/cpp-tutorial/class-code-and-header-files/

#include <iostream>
#include "Date.h"

using namespace std;

int main() {

    Date ChristmasDay = Date(2022, 12, 25);

    cout << "Christmas day is on the " << ChristmasDay.getDay() << "th" << endl;

    return 0;
}