#include <stdio.h>

static void leapYear(){
    int year;
    scanf("%d", &year);
    if(year % 400 == 0){
        printf("%d was a leap year", year);
    }else if(year % 4 == 0 && year % 100 != 0){
        printf("%d was a leap year", year);
    }else{
        printf("%d was not a leap year", year);
    }
}

int main(){
    int year;
    scanf("%d", &year);
    if(year % 400 == 0){
        printf("%d was a leap year", year);
    }else if(year % 4 == 0 && year % 100 != 0){
        printf("%d was a leap year", year);
    }else{
        printf("%d was not a leap year", year);
    }
}
