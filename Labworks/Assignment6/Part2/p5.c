//  Create a structure named Date having day, month and year as its elements.
//  Store the current date in the structure. Now add 45 days to the current date
//  and display the final date.


#include<stdio.h>
#include<conio.h>

struct Date {
    int day;
    int month;
    int year;
};

int daysInMonth(int month, int year) {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
        return 29;
    else
        return days[month - 1];
}

struct Date addDays(struct Date currentDate, int daysToAdd) {
    struct Date result = currentDate;

    while (daysToAdd > 0) {
        int daysInCurrentMonth = daysInMonth(result.month, result.year);
        if (result.day + daysToAdd > daysInCurrentMonth) {
            daysToAdd -= daysInCurrentMonth - result.day + 1;
            result.day = 1;

            if (result.month == 12) {
                result.month = 1;
                result.year++;
            } else {
                result.month++;
            }
        } else {
            result.day += daysToAdd;
            daysToAdd = 0;
        }
    }

    return result;
}

int main() {
    
    struct Date currentDate = {25, 12, 2023}; 

    printf("Current Date: %d-%d-%d\n", currentDate.day, currentDate.month, currentDate.year);

   
    struct Date finalDate = addDays(currentDate, 45);

    printf("Final Date after adding 45 days: %d-%d-%d\n", finalDate.day, finalDate.month, finalDate.year);

    return 0;
}