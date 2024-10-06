#include <iostream>
#include <string>
using namespace std;
class WeekDays {
private:
    string Days[7];
    int CurrentDay;

public:
    WeekDays() : CurrentDay(0) {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";
    }

    WeekDays(int currentDay) {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";
        CurrentDay = currentDay % 7;
    }

    string getCurrentDay() {
        return Days[CurrentDay];
    }

    string getNextDay() {
        return Days[(CurrentDay + 1) % 7];
    }

    string getPreviousDay() {
        return Days[(CurrentDay + 6) % 7];
    }

    string getNthDayFromToday(int n) {
        return Days[(CurrentDay + n) % 7];
    }
};

int main() {
    WeekDays week;
    cout << "Current Day: " << week.getCurrentDay() << endl;
    cout << "Next Day: " << week.getNextDay() << endl;
    cout << "Previous Day: " << week.getPreviousDay() << endl;
    cout << "5th Day from Today: " << week.getNthDayFromToday(5) << endl;

    WeekDays customWeek(3);
    cout << "Custom Current Day: " << customWeek.getCurrentDay() << endl;
    cout << "Nth Day from Custom Day: " << customWeek.getNthDayFromToday(2) << endl;

    return 0;
}
