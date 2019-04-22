#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     int minutes = 0;
//     float days = 0;
//     double minutesInDay = 60 * 24;
//     double years = 0.0;
//     double minutesInYear = 0.0;
//
//     scanf("Insert minutes %d:", &minutes);
//
//     days = minutes / minutesInDay;
//     years = minutes / minutesInYear;
//
//     printf("Result is %f days and %f years.\n", days, years );
//
//     return 0;
// }

int main()
{
    int minutes = 0;
    double years = 0.0;
    double days = 0.0;
    double minutesInYear = 0;

    printf("Enter minutes: ");

    scanf("%d", &minutes);

    minutesInYear = 60 * 24 * 365;

    years = minutes / minutesInYear;
    days = (minutes / 60.0) / 24.0;

    printf("%d minutes is approx %f years and %f days\n", minutes, years, days);
}
