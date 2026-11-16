#include <stdio.h>

int main() {
    int year,y,day;
    long int totalyears,leapyears,normalyears,totaldays;
    
    printf("Name:Daniyal Ali\tRoll No: 26P-3014\n");

    printf("Enter a year : ");
    scanf("%d", &year);

    if(year < 1900) {
        printf("Please enter year 1900 or later \n");
    }

    y=year-1;
    
    leapyears=(y/4-y/100+y/400)-460;
    
    totalyears=year-1900;
    
    normalyears=totalyears-leapyears;

    totaldays=(normalyears*365)+(leapyears*366);

    day=totaldays%7;
    

    printf("On 1st January %d, the day was: ", year);

    if(day==0){
        printf("Monday\n");
    } 
    else if(day==1){
        printf("Tuesday\n");
    } 
    else if(day==2) {
        printf("Wednesday\n");
    } 
    else if(day==3){
        printf("Thursday\n");
    } 
    else if(day==4){
        printf("Friday\n");
    } 
    else if(day==5){
        printf("Saturday\n");
    } 
    else if(day==6){
        printf("Sunday\n");
    }

}
