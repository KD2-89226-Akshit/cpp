#include<stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

void acceptDateFromConsole(struct Date *ptrDate)
{
    printf("Enter the day-");
    scanf("%d",&ptrDate->day);
    printf("Enter the month-");
    scanf("%d",&ptrDate->month);
    printf("Enter the year-");
    scanf("%d",&ptrDate->year);
}



void printDateOnConsole(struct Date *ptrDate)
{
    printf("Enter the day Month Year: %d/%d/%d",ptrDate->day,ptrDate->month,ptrDate->year);
}

int main()
{
    struct Date d1;
    acceptDateFromConsole(&d1);
    printDateOnConsole(&d1);
}