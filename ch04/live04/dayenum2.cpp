#include <iostream>

enum days_of_week {Su,Mon,Tue,Wed,Thu,Fri,Sat};

int main() {
    days_of_week day1, day2;

    int userDay1, userDay2;
    
    // ask user for the day
    std::cout << "Enter day 1 (Su = 1, Mon = 2, ..., Sat = 7): ";
    std::cin >> userDay1;
    std::cout << "Enter day 2 (Su = 1, Mon = 2, ..., Sat = 7): ";
    std::cin >> userDay2;

    // convert user input to enum
    switch(userDay1) {
        case 1:
            day1 = Su;
            break;
        case 2:
            day1 = Mon;
            break;
        case 3:
            day1 = Tue;
            break;
        case 4:
            day1 = Wed;
            break;
        case 5:
            day1 = Thu;
            break;
        case 6:
            day1 = Fri;
            break;
        case 7:
            day1 = Sat;
            break;
        default:
            std::cout << "Invalid input" << std::endl;
            return 1;
    }

    switch(userDay2) {
        case 1:
            day2 = Su;
            break;
        case 2:
            day2 = Mon;
            break;
        case 3:
            day2 = Tue;
            break;
        case 4:
            day2 = Wed;
            break;
        case 5:
            day2 = Thu;
            break;
        case 6:
            day2 = Fri;
            break;
        case 7:
            day2 = Sat;
            break;
        default:
            std::cout << "Invalid input" << std::endl;
            return 1;
    }

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
