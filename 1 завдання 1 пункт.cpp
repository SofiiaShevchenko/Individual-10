// Завдання 1.1
// 3 варіант
// Скільки секунд мають доба, тиждень, рік?

#include <iostream>
using namespace std;

const int sec_in_min = 60;
const int min_in_hour = 60;
const int hour_in_day = 24;
const int day_in_week = 7;
const int day_in_year = 365;

int main()
{

    int day, week, year;
    day = sec_in_min * min_in_hour * hour_in_day;
    week = sec_in_min * min_in_hour * hour_in_day * day_in_week;
    year = sec_in_min * min_in_hour * hour_in_day * day_in_year;

    cout << "Seconds in day = " << day << endl;
    cout << "Seconds in week = " << week << endl;
    cout << "Seconds in year = " << year << endl;

}
