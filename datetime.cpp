#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    // get current timestamp
    // time_t timestamp;
    // time(&timestamp); // will return and write timestamp into memory location of timestamp
    // time_t timestamp = time(NULL); // create timestamp from current date

    // date and time from timestamp
    // cout << ctime(&timestamp) << endl;

    // struct tm datetime;
    // time_t timestamp;

    // datetime.tm_year = 2024 - 1990; // number of years since 1900
    // datetime.tm_mon = 12 - 1; // number of month since January
    // datetime.tm_mday = 17;
    // datetime.tm_hour = 12;
    // datetime.tm_min = 30;
    // datetime.tm_sec = 1;

    // datetime.tm_isdst = -1; // daylight saving must specified and -1 use computer timezone

    // timestamp = mktime(&datetime); // mktime function required tm_year, tm_mon, tm_day, tm_hour, tm_min and tm_sec members

    // cout << ctime(&timestamp) << endl ;

    // find weekdays of given dates
    // Create the datetime structure and use mktime to fill in the missing members
    // struct tm datetime;
    // datetime.tm_year = 2023 - 1900; // Number of years since 1900
    // datetime.tm_mon = 12 - 1; // Number of months since January
    // datetime.tm_mday = 17;
    // datetime.tm_hour = 0; datetime.tm_min = 0; datetime.tm_sec = 0;
    // datetime.tm_isdst = -1;
    // mktime(&datetime); // correct the date time data

    // string weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    // cout << "The date is on a " << weekdays[datetime.tm_wday];

    // get datetime structure and output current hour
    // time_t timestamp = time(&timestamp);
    // struct tm current_datetime = *localtime(&timestamp); // localtime for computer timezone and gmtime for GMT timezone

    // cout << current_datetime.tm_hour << endl;

    // time_t timestamp = time(NULL);
    // struct tm datetime = *localtime(&timestamp);

    // cout << asctime(&datetime); // display date from datetime structure , asctime will not correct invalid date and if set the month 32 and will display 32

    // Create the datetime structure and use mktime to correct mistakes
    // struct tm datetime;
    // datetime.tm_year = 2022 - 1900; // Number of years since 1900
    // datetime.tm_mon = 0;            // 0 is January
    // datetime.tm_mday = 32;
    // datetime.tm_hour = 0;
    // datetime.tm_min = 0;
    // datetime.tm_sec = 0;
    // datetime.tm_isdst = -1;
    // mktime(&datetime); // correct mistake input on datetime structure before display it using asctime

    // cout << asctime(&datetime);

    // // ctime and asctime allow to display date but can't format how to display
    // // use strftime to format and display date time

    // time_t timestamp = time(NULL);
    // struct tm datetime = *localtime(&timestamp);

    // char output[50];

    // // %B full month name (e.g December), %e day of month leading space (e.g 9)
    // strftime(output, 50, "%B %e %y", &datetime);

    // cout << output << "\n";

    // // %I 12 hr format (e.g 02), %M minutes within hour, %p e.g AM or PM , %s seconds within minutes (e.g 04)
    // strftime(output, 50, "%I:%M:%S %p", &datetime);
    // cout << output << "\n";

    // // %d day of month leading (e.g 09), %y 2 digit year (e.g 24)
    // strftime(output, 50, "%m/%d/%y", &datetime);
    // cout << output << "\n";

    // // %a short weekday (e.g Fri), %b short month name (e.g Dec), %H 24 hr format (e.g 14), %Y 4 digits year (e.g 2024)
    // strftime(output, 50, "%a %b %e %H:%M:%S %Y", &datetime);
    // cout << output << "\n";

    // Measure time difftime() e.g measure secodns difference between two time stamps, measure difference between dates
    time_t now;
    time_t nextyear;
    struct tm datetime;

    now = time(NULL);
    datetime = *localtime(&now);

    datetime.tm_year = datetime.tm_year + 1;
    datetime.tm_mon = 0;
    datetime.tm_mday = 1;
    datetime.tm_hour = 0;
    datetime.tm_min = 0;
    datetime.tm_sec = 0;
    datetime.tm_isdst = -1;
    nextyear = mktime(&datetime);

    int diff = difftime(nextyear, now);
    cout << diff << " seconds until next year ";

    // clock used for measuring short interval and more precise than difftime
    clock_t before = clock();
    int k = 0;
    for (int i = 0; i < 10000; i++)
    {
        k += i;
    }

    clock_t duration = clock() - before;
    cout << "Duration :" << (float)duration / CLOCKS_PER_SEC << " seconds";
}