#include <iostream>

enum days_of_week {Su,Mon,Tue,Wed,Thu,Fri,Sat};

int main() {
    days_of_week day1, day2;
    
    day1 = Mon;
    day2 = Thu;

    int diff = day2 - day1;
    std::cout << "Days between = " << diff << std::endl;

    if(day1 < day2) {
        std::cout << "day1 comes before day2" << std::endl;
    } else if (day1 == day2) {
        std::cout << "day1 and day2 are the same" << std::endl;
    } else {
        std::cout << "day1 comes after day2" << std::endl;
    }

    return 0;
}